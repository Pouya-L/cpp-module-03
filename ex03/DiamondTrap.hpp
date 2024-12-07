/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:25:15 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/07 17:38:21 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& otherDiamondTrap);
		DiamondTrap& operator=(const DiamondTrap& otherDiamondTrap);
		virtual	~DiamondTrap();

		using	ScavTrap::attack; // Use attack method from ScavTrap
		void	whoAmI();
		void	showDetailedStats() const ;
};
