/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:44:33 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/08 12:44:47 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
    Weapon club = Weapon("axe");
    
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of axe");
    bob.attack();
    }
    {
    Weapon club = Weapon("crude spiked broom");
    
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of broom");
    jim.attack();
    }
    return (0);
}