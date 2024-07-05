/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:25:09 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/08 12:33:00 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon & _weapon) : name(_name), weapon(_weapon) { }

void HumanA::attack()
{
    std::cout<< name << " attacks with their " << weapon.getType() << std::endl;
}