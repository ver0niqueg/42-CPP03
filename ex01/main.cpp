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
    ScavTrap robot("Veronique");

    std::cout << "\n=== Testing attack() ===" << std::endl;
    robot.attack("intruder");

    std::cout << "\n=== Taking damage ===" << std::endl;
    robot.takeDamage(30);

    std::cout << "\n=== Repairing ===" << std::endl;
    robot.beRepaired(20);

    std::cout << "\n=== Entering Gate Keeper Mode ===" << std::endl;
    robot.guardGate();

    std::cout << "\n=== Exiting main() ===" << std::endl;
    return 0;
}