/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 19:41:16 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/25 16:08:29 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

/* DiamondTrap hérite de FragTrap et de ScavTrap qui eux-même derivent de 
ClapTrap -> deux instances de ClapTrap sont donc créées -> la solution
c'est de faire un héritage virtuel sur FragTrap et ScavTrap */

class DiamondTrap : public FragTrap, public ScavTrap
{
	private: 
		std::string _name;
		
	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(DiamondTrap const &copy);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap();

		void attack(const std::string& target); // utilise ScavTrap::attack
		void whoAmI();
	
};

#endif