/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:47:35 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/21 23:47:35 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << CYAN << "Welcome to the Enchanted Fairy Forest!" << RESET << std::endl;

    std::cout << "\n" << YELLOW << "=== Summoning the Forest Guardian Fairy ===" << RESET << std::endl;
    ScavTrap fairyGuardian("Seraphina");
    fairyGuardian.printStatus();

    std::cout << "\n" << GREEN << "=== Casting an attack spell ===" << RESET << std::endl;
    fairyGuardian.attack("Mischievous Goblin");
    fairyGuardian.printStatus();

    std::cout << "\n" << RED << "=== Taking damage from dark magic ===" << RESET << std::endl;
    fairyGuardian.takeDamage(30);
    fairyGuardian.printStatus();

    std::cout << "\n" << GREEN << "=== Healing with forest light ===" << RESET << std::endl;
    fairyGuardian.beRepaired(20);
    fairyGuardian.printStatus();

    std::cout << "\n" << GREEN << "=== Entering Gate Keeper Mode to protect the realm ===" << RESET << std::endl;
    fairyGuardian.guardGate();
    fairyGuardian.printStatus();

    std::cout << "\n" << YELLOW << "The fairys duty is done for now..." << RESET << std::endl;

    return 0;
}