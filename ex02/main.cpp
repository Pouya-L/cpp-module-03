/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:39:24 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/07 17:26:06 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

/* int	main()
{
	std::cout << "Calling default constructors with names:" << std::endl;
	ClapTrap	clappy1("Clappy 1");
	ScavTrap	scavvy1("Scavvy 1");
	FragTrap	fraggy1("Fraggy 1");
	clappy1.showDetailedStats();
	scavvy1.showDetailedStats();
	fraggy1.showDetailedStats();
	clappy1.attack("Hercules");
	scavvy1.attack("Hercules");
	fraggy1.attack("Hercules");
	clappy1.takeDamage(3);
	scavvy1.takeDamage(12);
	fraggy1.takeDamage(22);
	clappy1.beRepaired(5);
	scavvy1.beRepaired(15);
	fraggy1.beRepaired(25);

	std::cout << "\n\nCalling default constructors with no names:" << std::endl;
	ClapTrap	clappy2;
	ScavTrap	scavvy2;
	FragTrap	fraggy2;

	std::cout << "\n\nCalling copy constructor to the one with names;" << std::endl;
	ClapTrap	clappy3(clappy1);
	ScavTrap	scavvy3(scavvy1);
	FragTrap	fraggy3(fraggy1);
	clappy3.showDetailedStats();
	scavvy3.showDetailedStats();
	fraggy3.showDetailedStats();

	std::cout << "\n\nCalling copy constructor to the one with no names;" << std::endl;
	ClapTrap	clappy4 = clappy2;
	ScavTrap	scavvy4 = scavvy2;
	FragTrap	fraggy4 = fraggy2;
	clappy4.showDetailedStats();
	scavvy4.showDetailedStats();
	fraggy4.showDetailedStats();

	return 0;
} */

int main(void)
{

	welcome_msg();
	FragTrap fraggy("FR4G-TP");
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
			fraggy.attack("Enemy");
		if (input == "STATS")
			fraggy.showDetailedStats();
		if (input == "HURT")
		{
			intInput = getPositiveInputInt("Please enter the amount of damage: ");
			if (intInput == -1)
				break ;
			fraggy.takeDamage(static_cast<unsigned int>(intInput));
		}
		if (input == "REPAIR")
		{
			intInput = getPositiveInputInt("Please enter the amount of damage you want to repair: ");
			if (intInput == -1)
				break ;
			fraggy.beRepaired(static_cast<unsigned int>(intInput));
		}
		if (input == "HIGHFIVE")
			fraggy.highFivesGuys();
		if (input == "EXIT") {
			std::cout << YELLOW << "I'll be back..." << RESET << std::endl;
			return(0);
		}
	}
}
