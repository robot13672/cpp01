/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:37:25 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/08 12:44:17 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name) { }

void HumanB::setWeapon(Weapon &_weapon)
{
    this->weapon = &_weapon;
}

void HumanB::attack()
{
    if (weapon == NULL)
        std::cout << name << " attacks with no weapon" << std::endl;
    else
        std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}