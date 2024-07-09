/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:13:01 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/07/09 15:11:08 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
	    Zombie();
	    ~Zombie();
	    void		announce(void);
	    void		setname(std::string name);
        void		hordedestroy(Zombie *horde);
};
    Zombie*     zombieHorde( int N, std::string name );

#endif