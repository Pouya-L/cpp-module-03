/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 00:14:19 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/04 03:57:49 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Uknown ScavTrap")
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardingMode = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardingMode = false;
	std::cout << "ScavTrap Constructor for "<< name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& otherScavTrap) : ClapTrap(otherScavTrap)
{
	this->_guardingMode = otherScavTrap._guardingMode;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& otherScavTrap)
{
	std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
	if (this == &otherScavTrap)
		return *this;
	ClapTrap::operator=(otherScavTrap);
	this->_guardingMode = otherScavTrap._guardingMode;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor for " << _name << " was called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}

bool ScavTrap::checkGuardMode()
{
	if (_guardingMode)
		return true;
	else
		return false;
}
void ScavTrap::showDetailedStats() const
{
	ClapTrap::showDetailedStats();
	std::cout <<	"┌────────────────────────────────────────────┐\n"
				<<	"| Gurding mode: " << _guardingMode << std::setw(30) << "|\n"
				<<	"└────────────────────────────────────────────┘" << std::endl;

}
