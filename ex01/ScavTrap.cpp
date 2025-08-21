/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:04:46 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/21 23:04:46 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap: " << this->_name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) // important dans l'heritage
{
     this->_hitPoints = copy._attackDamage;
     this->_energyPoints = copy._energyPoints;
     this->_attackDamage = copy._attackDamage;
     this->_name = copy._name;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other); // important dans l'heritage
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
        this->_name = other._name;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " has been destroyed." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "[ STATUS ] ScavTrap " << this->_name 
                << " cannot attack because it is dead." 
                << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0)
    {
        std::cout << "[ STATUS ] ScavTrap " << this->_name 
                << " cannot attack because it has no energy points left." 
                << std::endl;
        return ;
    }
    std::cout << "ScavTrap: " << this->_name 
            << " attacks " << target << ", causing " 
            << this->_attackDamage << " points of damage!" 
            << std::endl;
    this->_energyPoints--;
    std::cout << "[ STATUS ] ScavTrap " << this->_name 
            << ": remaining energy points: " 
            << this->_energyPoints << std::endl;
    return ; 
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap: " << this->_name << " has entered Gate keeper mode." << std::endl;
}