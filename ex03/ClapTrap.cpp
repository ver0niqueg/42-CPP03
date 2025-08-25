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

ClapTrap::ClapTrap() :
	_name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : 
	_name(Name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap: " << _name << " is created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap assignment operator called." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: " << _name << " is destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name 
				<< " cannot attack because it is dead." 
				<< std::endl;
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name 
				<< " cannot attack because it has no energy points left." 
				<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name 
			<< " attacks " << target << ", causing " 
			<< _attackDamage << " points of damage!" 
			<< std::endl;
	--_energyPoints;
	return ; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name
			<< " takes " << amount
			<< " damage."
			<< std::endl;
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;

	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name 
				  << " is dead." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name
				<< " cannot be repaired because it has no energy points left."
				<< std::endl;
		return ;
	}
	else if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name
				<< " is dead and cannot be repaired."
				<< std::endl;
		return ;
	}
	_hitPoints += amount;
	--_energyPoints;
	std::cout << "ClapTrap " << _name
			<< " repairs itself for " << amount
			<< " hit points."
			<< std::endl;
}

void ClapTrap::printStatus() const 
{
	std::cout << "=== ClapTrap " << _name << " [ Status ] ===" << std::endl;
	std::cout << "Hit Points: " << _hitPoints << std::endl;
	std::cout << "Energy Points: " << _energyPoints << std::endl;
	std::cout << "Attack Damage: " << _attackDamage << std::endl;
}
