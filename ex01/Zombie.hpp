/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:13:01 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/06/03 18:15:25 by khristi@stu      ###   ########.fr       */
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
        Zombie*     zombieHorde( int N, std::string name );
        void		hordedestroy(Zombie *horde);
};

#endif