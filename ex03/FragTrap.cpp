/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 03:43:31 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/04 19:44:11 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Unknown FragTrap")
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor for " << name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& otherFragTrap) : ClapTrap(otherFragTrap)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& otherFragTrap)
{
	std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
	if (this == &otherFragTrap)
		return *this;
	ClapTrap::operator=(otherFragTrap);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor for " << _name << " was called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requested a high five from everyone. No one highfived it back" << std::endl;
}
