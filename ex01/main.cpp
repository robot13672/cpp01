/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:11:55 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/07/09 15:09:04 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde;

    horde = zombieHorde(3, "Zumbo");
    for (int i = 0; i < 3; i++)
    {
        horde[i].announce();
    }
    horde->hordedestroy(horde);
    return (0);
}