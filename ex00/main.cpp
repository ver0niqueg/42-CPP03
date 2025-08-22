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
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap clap("Clappy");
    clap.printStatus();

    std::cout << "\n=== Initial Attack ===" << std::endl;
    clap.attack("Target Dummy");
    clap.printStatus();

    std::cout << "\n=== Taking Damage ===" << std::endl;
    clap.takeDamage(3);
    clap.printStatus();

    std::cout << "\n=== Repairing ===" << std::endl;
    clap.beRepaired(5);
    clap.printStatus();

    std::cout << "\n=== Draining Energy ===" << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        clap.attack("Energy Drain Target");
        clap.printStatus();
    }

    std::cout << "\n=== Trying to attack with no energy ===" << std::endl;
    clap.attack("Out of energy");
    clap.printStatus();

    std::cout << "\n=== Taking Lethal Damage ===" << std::endl;
    clap.takeDamage(20);
    clap.printStatus();

    std::cout << "\n=== Trying to repair while dead ===" << std::endl;
    clap.beRepaired(10);
    clap.printStatus();

    std::cout << "\n=== End of main ===" << std::endl;
    return 0;
}