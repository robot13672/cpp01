/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:42:27 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/06/03 15:55:57 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie1 = new Zombie();
    zombie1 = zombie1->newZombie("New Zombie");
    zombie1->randomChump("Random Champ");
    delete zombie1;
    return 0;
}