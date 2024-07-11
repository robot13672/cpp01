/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:37:25 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/11 12:04:10 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : weapon(NULL), name(_name) { }

void HumanB::setWeapon(Weapon &_weapon)
{
    weapon = &_weapon;
}

void HumanB::attack() const
{
    if (weapon == NULL)
        std::cout << name << " attacks with no weapon" << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}