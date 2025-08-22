/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:12:14 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/22 14:43:24 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap: " << this->_name << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    this->_name = copy._name;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
        this->_name = other._name;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: " << this->_name << " has been destroyed." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " has requested a HIGH-FIVE." << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "[ STATUS ] FragTrap " << this->_name 
                << " cannot attack because it is dead." 
                << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0)
    {
        std::cout << "[ STATUS ] FragTrap " << this->_name 
                << " cannot attack because it has no energy points left." 
                << std::endl;
        return ;
    }
    std::cout << "FragTrap: " << this->_name 
            << " attacks " << target << ", causing " 
            << this->_attackDamage << " points of damage!" 
            << std::endl;
    this->_energyPoints--;
    std::cout << "[ STATUS ] FragTrap " << this->_name 
            << ": remaining energy points: " 
            << this->_energyPoints << std::endl;
    return ; 
}

