/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:25:15 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/04 19:41:25 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
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
};
