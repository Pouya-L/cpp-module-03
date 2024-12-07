/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 03:43:31 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/07 16:37:28 by plashkar         ###   ########.fr       */
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

FragTrap::FragTrap(FragTrap& otherFragTrap) : ClapTrap(otherFragTrap)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& otherFragTrap)
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

void	FragTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0){
		std::cout << RED << "FragTrap is DEAD!!! Much like you will soon be... 😈😈😈" << RESET << std::endl;
		this->showDetailedStats();
		return ;
	}
	if (_energyPoints <= 0) {
		std::cout << "FragTrap is too tired and has no energy points" << std::endl;
		this->showDetailedStats();
		return ;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
	this->showDetailedStats();
}

void FragTrap::highFivesGuys(void)
{
	if (_hitPoints <= 0){
		std::cout << RED << "FragTrap is DEAD!!! Much like you will soon be... 😈😈😈" << RESET << std::endl;
		this->showDetailedStats();
		return ;
	}
	std::cout << "FragTrap " << _name << " requested a high five from everyone. No one highfived it back" << std::endl;
}
