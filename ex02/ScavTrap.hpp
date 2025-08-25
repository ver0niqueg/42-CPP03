/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:51:01 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/21 22:51:01 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate();
};

#endif