/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:28:20 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/07 16:56:49 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(), _name("Unknown DiamondTrap")
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_fragAttackDamage;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_fragAttackDamage;
	std::cout << "DiamondTrap Constructor for " << name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& otherDiamondTrap) : ClapTrap(otherDiamondTrap), FragTrap(otherDiamondTrap), ScavTrap(otherDiamondTrap), _name(otherDiamondTrap._name)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& otherDiamondTrap)
{
	std::cout << "DiamondTrap Copy Assignment Operator called" << std::endl;
	if (this == &otherDiamondTrap)
		return *this;
	// Call base class assignment operators
	ClapTrap::operator=(otherDiamondTrap);
	ScavTrap::operator=(otherDiamondTrap);
	FragTrap::operator=(otherDiamondTrap);
	// Copy DiamondTrap specific members
	this->_name = otherDiamondTrap._name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor for " << _name << " was called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}



