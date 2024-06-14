/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:33:31 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/06/03 15:47:51 by khristi@stu      ###   ########.fr       */
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
	    Zombie		*newZombie(std::string name);
	    void		randomChump(std::string name);
	    void		setname(std::string name);
};

#endif