/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:39:24 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/07 16:53:36 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{

	welcome_msg();
	DiamondTrap Di("SC4P-TP");
	std::string input = "";
	int 		intInput = -1;
	while (true)
	{
		std::cout << GREEN <<"> " << RESET;
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << RED << "EOF detected. Exiting the program." << RESET << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break ;
		}
		if (input == "ATTACK")
			Di.attack("Enemy");
		if (input == "STATS")
			Di.showDetailedStats();
		if (input == "HURT")
		{
			intInput = getPositiveInputInt("Please enter the amount of damage: ");
			if (intInput == -1)
				break ;
			Di.takeDamage(static_cast<unsigned int>(intInput));
		}
		if (input == "REPAIR")
		{
			intInput = getPositiveInputInt("Please enter the amount of damage: ");
			if (intInput == -1)
				break ;
			Di.beRepaired(getPositiveInputInt("Please enter the amount of damage you want to repair: "));
		}
		if (input == "EXIT") {
			std::cout << YELLOW << "I'll be back..." << RESET << std::endl;
			return(0);
		}
	}
}


