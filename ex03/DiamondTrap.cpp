/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:28:20 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/05 00:02:58 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), _name("Unknown DiamondTrap")
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap Constructor for " << name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& otherDiamondTrap) : ClapTrap(otherDiamondTrap), ScavTrap(otherDiamondTrap), FragTrap(otherDiamondTrap), _name(otherDiamondTrap._name)
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



