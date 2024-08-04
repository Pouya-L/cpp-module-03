/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:39:24 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/04 03:31:42 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	ClapTrap clappy1("first one");
	ClapTrap clappy2("second one");
	clappy1.attack("enemy");
	clappy2 = clappy1;
	clappy2.showDetailedStats();
	clappy2.takeDamage(5);
	clappy1.showDetailedStats();
	ClapTrap clappy3(clappy2);
	clappy3.showDetailedStats();
	clappy2.takeDamage(6);
	ScavTrap Scavvy1("first scavvy one");
	ScavTrap Scavvy2("second scavvy one");
	Scavvy1.attack("enemy");
	Scavvy2 = Scavvy1;
	Scavvy2.showDetailedStats();
	Scavvy2.takeDamage(5);
	Scavvy1.showDetailedStats();
	ScavTrap Scavvy3(Scavvy2);
	Scavvy3.showDetailedStats();
	Scavvy2.takeDamage(6);
	return 0;
}
