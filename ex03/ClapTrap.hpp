/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:01:28 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/04 19:45:27 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <limits>

// ANSI color codes
#define RESET "\033[0m"
#define BLINK "\033[5M"

// Regular Colors
#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"

// Bold
#define BOLDBLACK "\033[1;30m"
#define BOLDRED "\033[1;31m"
#define BOLDGREEN "\033[1;32m"
#define BOLDYELLOW "\033[1;33m"
#define BOLDBLUE "\033[1;34m"
#define BOLDPURPLE "\033[1;35m"
#define BOLDCYAN "\033[1;36m"
#define BOLDWHITE "\033[1;37m"


/**
 * To ensure proper cleanup of resources and avoid undefined behavior
 * when dealing with inheritance, especially with multiple inheritance,
 * you should declare the destructors of the base classes as virtual.
 */
class	ClapTrap {
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& otherClapTrap);
	ClapTrap& operator=(const ClapTrap& otherClapTrap);
	virtual	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	virtual void showDetailedStats() const; // Make it virtual for overriding
};

void			welcome_msg(void);
std::string		printLen(std::string str);
unsigned int	getInputInt(std::string msg);
int				getInput(std::string &input);

#endif
