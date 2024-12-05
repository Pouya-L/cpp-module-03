/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:39:24 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/05 19:33:34 by plashkar         ###   ########.fr       */
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
	while (true)
	{
		std::cout << GREEN <<"> " << RESET;
		if (getInput(input) == 2)
			break;
		if (input == "ATTACK")
			Di.attack("Enemy");
		if (input == "STATS")
			Di.showDetailedStats();
		if (input == "HURT")
			Di.takeDamage(getInputInt("Please enter the ammount of damage: "));
		if (input == "REPAIR")
			Di.beRepaired(getInputInt("Please enter the ammount of damage you want to repair: "));
		if (input == "EXIT") {
			std::cout << YELLOW << "I'll be back..." << RESET << std::endl;
			return(0);
		}
	}
}


