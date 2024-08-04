/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:47:36 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/04 03:37:36 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("unknown ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor for " << _name << " was called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor for " << _name << " was called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& otherClapTrap)
{
	*this = otherClapTrap;
	std::cout << "ClapTrap copy constructor called" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& otherClapTrap)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	if (this == &otherClapTrap)
		return *this;
	this->_name = otherClapTrap._name;
	this->_hitPoints = otherClapTrap._hitPoints;
	this->_energyPoints = otherClapTrap._energyPoints;
	this->_attackDamage = otherClapTrap._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor for " << _name << " was called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0) {
		std::cout << "ClapTrap is too tired and has no energy points" << std::endl;
		this->showDetailedStats();
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
				<< _attackDamage << " ponits of damage!" << std::endl;
	this->showDetailedStats();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl
		 			<< "He was general-purpose robot made by Hyperion "
					<< "that was programmed with a particularly happy and cowardly personality.\n"
					<< "He will be remebered dearly by his wheel who he left a widow.\n" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " damage." << std::endl;
	this->showDetailedStats();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= amount) {
		std::cout << "ClapTrap is too tired and has no energy points" << std::endl;
		this->showDetailedStats();
	}
	 _hitPoints += amount;
	 _energyPoints--;
	std::cout << "ClapTrap " << _name << " healed itself by " << amount << " points." << std::endl;
	this->showDetailedStats();
}

void	ClapTrap::showDetailedStats() const
{
	std::cout <<	"┌────────────────────────────────────────────┐\n"
				<<	"| Name: " << std::setw(36)<< printLen(_name) << " |" << std::endl
				<<	"| [ Hit points: " << std::setw(3) << _hitPoints << " ] [ Energy points: "
				<< std::setw(3) << _energyPoints << " ] |\n"
				<<	"└────────────────────────────────────────────┘" << std::endl;
}

std::string	printLen(std::string str)
{
	if (str.length() > 21)
		return (str.substr(0, 20) + ".");
	else
		return (str);
}

//functions for the main.cpp

unsigned int	getInputInt(std::string msg)
{
	bool				valid = false;
	unsigned int		input = -1;

	do {
		std::cout << msg << std::flush;
		if (!(std::cin >> input))
		{
			if (std::cin.eof()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				return (-1);
			}
			else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input; please try again." << std::endl;
			}
		}
		valid = true;
	} while (!valid);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (input);
}

int	getInput(std::string &input)
{
	std::getline(std::cin, input);
	if (std::cin.eof()) {
		std::cout << RED << "EOF detected. Exiting the program." << RESET << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (2);
	}
	if (std::cin.fail()) {
		std::cout << RED << "Input failed. Please try again." << RESET << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (1);
	}
	return (0);
}

void welcome_msg(void)
{
    std::cout <<	"                                               ▒▒░                                   \n"
					"                                             ░▒░                                     \n"
					"                                            ▒▒                                       \n"
					"                                           ░░                                        \n"
					"                                          ░░                                         \n"
					"                                         ░░                                      ▒▒▒ \n"
					"                                         ░                                     ░▓▒▒▒ \n"
					"                    ▒▒                  ░░                                   ▒▒▒▒▒▒  \n"
					"                  ░░░▒▒                 ░░                                  ░░░▒▓▒   \n"
					"                    ░░░▒░               ░                   ░             ░░▒░░░▒    \n"
					"                     ░░░░▒░▒░▒▓▓██▓▒▒▒▒░░               ▒▒▒▒▒░             ░░░░▒     \n"
					"                       ░░░░░▓▓▓▓▓▓▒▒▓▒░░░░░░░░░░░░░▓▓▒▒▒▒▒░              ░░░░░       \n"
					"                      ░░░░░░▒▓▓████▒▒▒░░░░░░░░░░░░░░▓▒▓████▒▒             ░░░        \n"
					"                      ░░░░░░▒▒█████▓▒▒░░▒▒▒▓▒▓▒▒░░░▒▒▒███▓▒░░            ░░░░▒       \n"
					"                     ░░▒░░░▒▒▓████▓▒▒░▒▓▓▓▓▓▓▓▓▒▒▒▒▒████▓▓▒            ░░░░ ░░       \n"
					"                  ▒▒░░░░░░░▒▒▒█████▓░▒░▒▓▓▓▓▓▓▒▒░▒▒░████▓█░             ▒░░░░        \n"
					"                  ▒░▒▒░░░░░▒▓▓██████▒░░░░▒▓▓▓▒▒░░░░▓█████▓░             ░░░░         \n"
					"              ░▓▒▓▒░░░░░░░▒▓████████▓▒░░░░░░░░▒░░███████▒▒▒░▒▒▒▒▒      ▒░░░          \n"
					"            ░░▒▒▒░░   ░░░░▒▓████████▓▒▒░░░░░▒▓▒▒████████▒░░░░░▒▒▒▒▒▒▓▓▒░░░░          \n"
					"          ░░▒▒▒░░     ░░░░▒▓████████▓░░░░░▒░░▒░████████▒         ▒░▒░░░░░▒░          \n"
					"         ▓▓░░░░        ░░░▒▒████████▓░░░░░░░░░▓████████░                             \n"
					"     ░▒▒▒▒░            ░░░░▒▓███████▓░░▒▓▓▓░░░████████▒                              \n"
					"   ░▒▒▒░░              ░░░░░░▓▓▓▓█▓▓▒░░▓▓▒▒░░▒▓▓▓▓█▓▓▒░                              \n"
					"    ░░░░░░▒░           ░░░░░░▒▓▓▓▓▓▓▓░░░░░░░░▓▓▓▓▓▓▓▒▒       +----------------+      \n"
					"      ░░░░░░░▒         ░░░░░░▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓░░       |   Welcome to   |      \n"
					"        ░░░░░▒░        ░░░░░░░▓▒▓▓░▒▒▒▒░▒░░▒░▒▒▓▓▓▓▒▒        |                |      \n"
					"         ▒░░░░▒░▒░      ░░░░░░▓▒▒░░░░░▒▒▒░▒░░░░▓▓▓▓▒░        |  ClapTrap 2.0  |      \n"
					"            ░▒▒░░░░░    ░░░░░░▒▒░░░░░░░░░░░░░░░▒░░░▒         +----------------+      \n"
					"            ░░░░░░▒░▒░░░░░░░░░▒░░░░░░░░░░░░░░░░░▒▒░                                  \n"
					"               ░░  ░░░  ░░░░░░░░░░░░░░░▒▒▒░░░░░░▒░▒                                  \n"
					"                        ░░░░░░░░░░░▒▒▒▒▒▒▒░▒░░░▒▒░                                   \n"
					"                         ░░░░░░░░░░░░░░░░░░░░░░░░                                    \n"
					"                         ░░░░░░░░░░░░░░░░░░░░░░░                                     \n"
					"    ▒▒▒▒▒▒▒▒▒▒        ▒▒▒░░░░░░░░░░░░░░░░░░░░░░░                                     \n"
					"     ▒▒▒▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒░░░░░  ░░░░░░░░░▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒                          \n"
					"       ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░ ░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒                        \n"
					"              ▒▒     ▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒               \n"
					"                           ▒▒▒░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒                 \n"
					"                              ░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒                              \n"
					"                               ░░░░░░░░░░░░░░▒▒                                      \n"
					<< std::endl;
	std::cout << CYAN << "+------------------------------------+\n"
						<< "| USAGE:                             |\n"
						<< "| type oone of these commands:       |\n"
						<< "| Attack: To attack the enemy        |\n"
						<< "| STATS: To show your current status |\n"
						<< "| HURT: To take damage               |\n"
						<< "| REPAIR: to repair some damage      |\n"
						<< "| EXIT: to exit the program          |\n"
						<< "+------------------------------------+\n"
						<< RESET << std::endl;
}
