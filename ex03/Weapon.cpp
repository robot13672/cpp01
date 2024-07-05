/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:20:53 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/08 12:20:54 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    type = _type;
}

const std::string Weapon::getType()
{
    return(type);
}

void Weapon::setType(std::string new_type)
{
    this->type = new_type;
}
