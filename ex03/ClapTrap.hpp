/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:21:12 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/21 23:21:12 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>  

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int _hitPoints; // health of the ClapTrap
        unsigned int _energyPoints;
        unsigned int _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &copy); // constructeur de copie
        ClapTrap &operator=(const ClapTrap &other); // operateur d'assignation
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void printStatus() const;       
};

#endif