/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:12:37 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/06/03 18:17:20 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "NoName";
}

Zombie::~Zombie()
{
    std::cout << name << " is dead" << std::endl;
}

void Zombie::setname(std::string name)
{
    this->name = name;
}
void Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::hordedestroy(Zombie *horde)
{
    delete [] horde;
}