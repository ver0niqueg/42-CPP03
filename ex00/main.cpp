/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:20:17 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/21 22:20:17 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << CYAN << "=== Welcome to the Forest Guardian Training ===" << RESET << std::endl;

    std::cout << "\n" << YELLOW << "=== Creating ClapTrap Guardian ===" << RESET << std::endl;
    ClapTrap guardian("Sylva");
    guardian.printStatus();

    std::cout << "\n" << GREEN << "=== First attack to defend the forest ===" << RESET << std::endl;
    guardian.attack("Forest Invader");
    guardian.printStatus();

    std::cout << "\n" << RED << "=== Taking damage from dark magic ===" << RESET << std::endl;
    guardian.takeDamage(5);
    guardian.printStatus();

    std::cout << "\n" << GREEN << "=== Healing with forest's blessing ===" << RESET << std::endl;
    guardian.beRepaired(7);
    guardian.printStatus();

    std::cout << "\n" << MAGENTA << "=== Using up energy fighting pests ===" << RESET << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        guardian.attack("Forest Pest");
        guardian.printStatus();
    }

    std::cout << "\n" << RED << "=== Attempting attack with no energy left ===" << RESET << std::endl;
    guardian.attack("Last Pest");
    guardian.printStatus();

    std::cout << "\n" << RED << "=== Taking heavy damage from a dark curse ===" << RESET << std::endl;
    guardian.takeDamage(20);
    guardian.printStatus();

    std::cout << "\n" << YELLOW << "=== Trying to heal when too weak ===" << RESET << std::endl;
    guardian.beRepaired(10);
    guardian.printStatus();

    std::cout << "\n" << CYAN << "=== End of Guardian Training ===" << RESET << std::endl;

    return 0;
}