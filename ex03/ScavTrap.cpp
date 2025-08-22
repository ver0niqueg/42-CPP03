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
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap: " << _name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) // important dans l'heritage
{
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    _name = copy._name;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other); // important dans l'heritage
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
        _name = other._name;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: " << _name << " has been destroyed." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " with incredible strength, causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " is too exhausted to attack!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " is too damaged to attack!" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " has entered Gate keeper mode." << std::endl;
}