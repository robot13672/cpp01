/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:33:14 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/11 11:54:49 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
		Weapon *weapon;
		std::string name;
	
	public:
		HumanB(std::string _name);
        void setWeapon(Weapon &weapon);
        void attack() const;
};

#endif