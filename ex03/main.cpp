/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 19:41:38 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/24 20:01:49 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "Welcome to the Enchanted Fairy Forest !" << std::endl;

    ClapTrap fairy1("Luna");
    ScavTrap fairy2("Sylva");
    FragTrap fairy3("Flora");
    DiamondTrap fairy4("Aurelia");

    std::cout << "\n=== Meet the fairies ===" << std::endl;
    std::cout << CYAN; fairy1.printStatus(); std::cout << RESET;
    std::cout << GREEN; fairy2.printStatus(); std::cout << RESET;
    std::cout << MAGENTA; fairy3.printStatus(); std::cout << RESET;
    std::cout << YELLOW; fairy4.printStatus(); std::cout << RESET;

    std::cout << "\n=== First bursts of magic ===" << std::endl;

    std::cout << CYAN; fairy1.attack("Sylva"); std::cout << RESET;
    std::cout << GREEN; fairy2.attack("Luna"); std::cout << RESET;
    std::cout << MAGENTA; fairy3.attack("Aurelia"); std::cout << RESET;
    std::cout << YELLOW; fairy4.attack("Flora"); std::cout << RESET;

    std::cout << "\n=== Using special powers ===" << std::endl;

    std::cout << GREEN; fairy2.guardGate(); std::cout << RESET;
    std::cout << MAGENTA; fairy3.highFivesGuys(); std::cout << RESET;
    std::cout << YELLOW; fairy4.whoAmI(); std::cout << RESET;

    std::cout << "\n=== Magical healing and regeneration ===" << std::endl;

    std::cout << CYAN; fairy1.beRepaired(20); std::cout << RESET;
    std::cout << GREEN; fairy2.beRepaired(15); std::cout << RESET;
    std::cout << MAGENTA; fairy3.beRepaired(25); std::cout << RESET;
    std::cout << YELLOW; fairy4.beRepaired(30); std::cout << RESET;

    std::cout << "\n=== Final status of the fairies ===" << std::endl;

    std::cout << CYAN; fairy1.printStatus(); std::cout << RESET;
    std::cout << GREEN; fairy2.printStatus(); std::cout << RESET;
    std::cout << MAGENTA; fairy3.printStatus(); std::cout << RESET;
    std::cout << YELLOW; fairy4.printStatus(); std::cout << RESET;

    std::cout << "\nMagic calms, peace returns to the realm " << std::endl;

    return 0;
}