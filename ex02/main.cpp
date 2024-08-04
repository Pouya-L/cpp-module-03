/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:39:24 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/04 18:22:43 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// int main(void)
// {
// 	welcome_msg();
// 	ScavTrap Scavvy("SC4P-TP");
// 	std::string input = "";
// 	while (true)
// 	{
// 		std::cout << GREEN <<"> " << RESET;
// 		if (getInput(input) == 2)
// 			break;
// 		if (input == "ATTACK")
// 			Scavvy.attack("Enemy");
// 		if (input == "STATS")
// 			Scavvy.showDetailedStats();
// 		if (input == "HURT")
// 			Scavvy.takeDamage(getInputInt("Please enter the ammount of damage: "));
// 		if (input == "REPAIR")
// 			Scavvy.beRepaired(getInputInt("Please enter the ammount of damage you want to repair: "));
// 		if (input == "EXIT") {
// 			std::cout << YELLOW << "I'll be back..." << RESET << std::endl;
// 			return(0);
// 		}
// 	}
// }

int	main()
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
}
