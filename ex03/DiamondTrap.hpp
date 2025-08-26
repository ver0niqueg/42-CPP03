/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 19:41:16 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/26 12:25:05 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

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

		void attack(const std::string& target);
		void whoAmI();
	
};

#endif