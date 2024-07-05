/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:15:39 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/06/10 17:05:21 by  ikhristi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
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