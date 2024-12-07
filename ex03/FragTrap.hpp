/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 03:38:56 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/07 16:46:04 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

/**
 * I need the keyword virtual here for the base class ClapTrap.
 * This ensures that only one instance of ClapTrap is created,
 * even if it is inherited multiple times.
 */
class	FragTrap : virtual public ClapTrap {
protected:
		int _fragAttackDamage;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& otherFragTrap);
	FragTrap& operator=(const FragTrap& otherFragTrap);
	virtual	~FragTrap();

	void	attack(const std::string& target);
	void	highFivesGuys(void);
};

#endif
