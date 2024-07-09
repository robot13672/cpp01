/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:24:26 by  ikhristi         #+#    #+#             */
/*   Updated: 2024/07/09 15:15:40 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Wrong number of parameters!" << std::endl;
        return (1);
    }
    std::ifstream inputFile(argv[1]);
    if(!inputFile.is_open())
    {
        std::cout << "File is not opening" << std::endl;
        return (1);
    }
    
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string fileName = argv[1];

    if (s1.empty())
    {
        std::cout << "The search string cannot be empty";
        return (1);
    }
    
    std::string outputFilename = fileName + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    
    std::string line;
    std::string buff;
    
    while (std::getline(inputFile, line))
    {
        size_t i = 0;
        buff = line;

        while((i = buff.find(s1, i)) != std::string::npos)
        {
            buff = buff.substr(0, i) + s2 + buff.substr(i + s1.length());
            i += s2.length();
        }
        outputFile << buff << std::endl;
    }
    outputFile.close();
    inputFile.close();

    return 0;
}