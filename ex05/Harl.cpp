/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:15:43 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/11 12:15:44 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "Debug message." << std::endl;
}

void    Harl::info(void)
{
    std::cout << "Info message." << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "Warning message." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "Error message." << std::endl;
}

void Harl::complain(std::string level) 
{
    void (Harl::*complaints[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*complaints[i])();
            return;
        }
    }
    std::cout << "Invalid level!" << std::endl;
}