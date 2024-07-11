/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:20:53 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/11 11:53:53 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    type = _type;
}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string new_type)
{
    type = new_type;
}
