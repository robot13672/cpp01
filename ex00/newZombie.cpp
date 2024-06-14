/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:42:23 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/06/03 15:56:48 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
    Zombie *newZombie = new Zombie();
    newZombie->setname(name);
    newZombie->announce();
    return newZombie;
};