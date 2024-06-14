/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:15:46 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/06/03 18:20:28 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].setname(name);
    }
    return horde;
}