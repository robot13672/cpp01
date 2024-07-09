/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:42:27 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/07/09 14:45:49 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie1 = new Zombie();
    Zombie *zombie2 = zombie1->newZombie("New Zombie");
    zombie1->randomChump("Random Champ");
    delete zombie1;
    delete zombie2;
    return 0;
}