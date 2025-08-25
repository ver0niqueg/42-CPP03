/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:12:14 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/25 16:41:19 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Unnamed")
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap: " << _name << " is ready." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap: " << _name << " has been cloned from another FragTrap!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap: " << _name << " copied another FragTrap's stats." << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: " << _name << " has vanished." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " has requested a HIGH-FIVE." << std::endl;
}

