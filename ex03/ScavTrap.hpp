/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 00:13:58 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/04 19:39:15 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

/**
 * I need the keyword virtual here for the base class ClapTrap.
 * This ensures that only one instance of ClapTrap is created,
 * even if it is inherited multiple times.
 */
class	ScavTrap : virtual public ClapTrap {
private:
	bool _guardingMode;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& otherScavTrap);
	ScavTrap& operator=(const ScavTrap& otherScaveTrap);
	virtual	~ScavTrap();

	void guardGate();
	bool checkGuardMode();
	void showDetailedStats() const ; // Override ClapTrap::showDetailedStats
};

#endif
