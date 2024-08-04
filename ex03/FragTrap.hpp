/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 03:38:56 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/04 19:43:46 by plashkar         ###   ########.fr       */
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
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& otherFragTrap);
	FragTrap& operator=(const FragTrap& otherFragTrap);
	virtual	~FragTrap();

	void highFivesGuys(void);
};

#endif
