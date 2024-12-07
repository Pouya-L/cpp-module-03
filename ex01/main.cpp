/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:39:24 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/07 16:28:46 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* int main(void)
{

	welcome_msg();
	ClapTrap clappy("CL4P-TP");
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
			clappy.attack("Enemy");
		if (input == "STATS")
			clappy.showDetailedStats();
		if (input == "HURT")
		{
			intInput = getPositiveInputInt("Please enter the amount of damage: ");
			if (intInput == -1)
				break ;
			clappy.takeDamage(static_cast<unsigned int>(intInput));
		}
		if (input == "REPAIR")
		{
			intInput = getPositiveInputInt("Please enter the amount of damage: ");
			if (intInput == -1)
				break ;
			clappy.beRepaired(getPositiveInputInt("Please enter the amount of damage you want to repair: "));
		}
		if (input == "EXIT") {
			std::cout << YELLOW << "I'll be back..." << RESET << std::endl;
			return(0);
		}
	}
} */


int main(){
	ScavTrap scavy("SCAVVV");
	scavy.attack("MAGS");
	scavy.guardGate();
}
