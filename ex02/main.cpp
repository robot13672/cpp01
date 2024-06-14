/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:30:05 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/06/03 18:44:17 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    std::cout << "Memory addresses:" << std::endl;
    std::cout << "Printing address of variable: " << &string << std::endl;
    std::cout << "Printing pointer of variable: " << stringPTR << std::endl;
    std::cout << "Printing reference of variable: " << &stringREF << std::endl << std::endl;
    std::cout << "Values:" << std::endl;
    std::cout << "Printing value of variable: " << string << std::endl;
    std::cout << "Printing value of pointer: " << *stringPTR << std::endl;
    std::cout << "Printing value of reference: " << stringREF << std::endl;
    return (0);
}