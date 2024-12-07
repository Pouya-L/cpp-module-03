/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 00:14:19 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/07 17:20:40 by plashkar         ###   ########.fr       */
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

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0){
		std::cout << RED << "ScavTrap is DEAD!!! Much like you will soon be... 😈😈😈" << RESET << std::endl;
		this->showDetailedStats();
		return ;
	}
	if (_energyPoints <= 0) {
		std::cout << "ScavTrap is too tired and has no energy points" << std::endl;
		this->showDetailedStats();
		return ;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
	this->showDetailedStats();
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor for " << _name << " was called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
	this->_guardingMode = true;
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
				<<	"| Guarding mode: " << _guardingMode << std::setw(29) << "|\n"
				<<	"└────────────────────────────────────────────┘" << std::endl;

}
