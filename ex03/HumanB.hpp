/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:33:14 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/08 12:35:24 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		Weapon *weapon;
		std::string name;
	
	public:
		HumanB(std::string _name);
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif