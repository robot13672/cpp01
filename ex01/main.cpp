/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khristi@student.42wolfsburg.de <ikhrist    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:11:55 by khristi@stu       #+#    #+#             */
/*   Updated: 2024/07/10 15:46:34 by khristi@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = 5; 
    std::string name = "HordeZombie";

    Zombie* horde = zombieHorde(N, name);
    
    for (int i = 0; i < N; i++) 
    {
        horde[i].announce();
    }

    delete[] horde;

    return 0;
}