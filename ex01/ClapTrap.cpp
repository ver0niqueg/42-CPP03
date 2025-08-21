/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:21:38 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/21 23:21:38 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _name(Name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap: " << this->_name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: " << this->_name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "[ STATUS ] ClapTrap " << this->_name 
                << " cannot attack because it is dead." 
                << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0)
    {
        std::cout << "[ STATUS ] ClapTrap " << this->_name 
                << " cannot attack because it has no energy points left." 
                << std::endl;
        return ;
    }
    std::cout << "ClapTrap: " << this->_name 
            << " attacks " << target << ", causing " 
            << this->_attackDamage << " points of damage!" 
            << std::endl;
    this->_energyPoints--;
    std::cout << "[ STATUS ] ClapTrap " << this->_name 
            << ": remaining energy points: " 
            << this->_energyPoints << std::endl;
    return ; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap: " << this->_name
            << " has taken " << amount
            << " of damage."
            << std::endl;
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0; // car c'est unsigned
    if (this->_hitPoints <= 0)
    {
        std::cout << "[ STATUS ] ClapTrap " << this ->_name << " is dead." << std::endl;
        return ;
    }
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "[ STATUS ] ClapTrap " << this->_name
                << " cannot be repaired because it has no energy points left."
                << std::endl;
        return ;
    }
    else if (this->_hitPoints <= 0)
    {
        std::cout << "[ STATUS ] ClapTrap " << this->_name
                << " is dead."
                << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name
            << " repairs itself for " << amount
            << " hit points."
            << std::endl;
    std::cout << "[ STATUS ] ClapTrap " << this->_name
            << " remaining hit points: " << this->_hitPoints
            << std::endl;
    std::cout << "[ STATUS ] ClapTrap " << this->_name
            << " remaining energy points: " << this->_energyPoints
            << std::endl;
    return ;
}
