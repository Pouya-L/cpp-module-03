/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:39:24 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/05 12:44:41 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{

	welcome_msg();
	ClapTrap clappy("CL4P-TP");
	std::string input = "";
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
			clappy.takeDamage(getInputInt("Please enter the amount of damage: "));
		if (input == "REPAIR")
			clappy.beRepaired(getInputInt("Please enter the amount of damage you want to repair: "));
		if (input == "EXIT") {
			std::cout << YELLOW << "I'll be back..." << RESET << std::endl;
			return(0);
		}
	}
}

// int	main()
// {
// 	ClapTrap clappy1("first one");
// 	ClapTrap clappy2("second one");
// 	clappy1.attack("enemy");
// 	clappy2 = clappy1;
// 	clappy2.showDetailedStats();
// 	clappy2.takeDamage(5);
// 	clappy1.showDetailedStats();
// 	ClapTrap clappy3(clappy2);
// 	clappy3.showDetailedStats();
// 	clappy2.takeDamage(6);
// 	return 0;
// }
