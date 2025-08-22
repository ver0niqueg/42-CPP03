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
    std::cout << "=== Creating ScavTrap ===" << std::endl;
    ScavTrap robot("VERO0");
    robot.printStatus();

    std::cout << "\n=== Testing attack() ===" << std::endl;
    robot.attack("intruder");
    robot.printStatus();

    std::cout << "\n=== Taking damage ===" << std::endl;
    robot.takeDamage(30);
    robot.printStatus();

    std::cout << "\n=== Repairing ===" << std::endl;
    robot.beRepaired(20);
    robot.printStatus();

    std::cout << "\n=== Entering Gate Keeper Mode ===" << std::endl;
    robot.guardGate();
    robot.printStatus();

    std::cout << "\n=== Exiting main() ===" << std::endl;
    return 0;
}