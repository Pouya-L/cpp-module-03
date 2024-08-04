/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 03:38:56 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/04 19:41:03 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap& otherFragTrap);
	FragTrap& operator=(FragTrap& otherFragTrap);
	virtual	~FragTrap();

	void highFivesGuys(void);
};

#endif
