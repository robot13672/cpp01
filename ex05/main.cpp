/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:15:39 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/11 12:16:37 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() 
{
    Harl harl;

    std::cout << "Test DEBUG level:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nTest INFO level:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nTest WARNING level:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nTest ERROR level:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nTest invalid level:" << std::endl;
    harl.complain("INVALID");

    return 0;
}