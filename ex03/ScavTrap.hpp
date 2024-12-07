/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 00:13:58 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/07 17:37:58 by plashkar         ###   ########.fr       */
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

	void			attack(const std::string& target);
	void			guardGate();
	bool			checkGuardMode();
	virtual void	showDetailedStats() const ; // Override ClapTrap::showDetailedStats
};

#endif
