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
	std::cout << CYAN << "=== Welcome to the Forest Training ===" << RESET << std::endl;

	std::cout << "\n" << YELLOW << "=== Creating ClapTrap fairy ===" << RESET << std::endl;
	ClapTrap fairy("Nymera");
	fairy.printStatus();

	std::cout << "\n" << GREEN << "=== First attack to defend the forest ===" << RESET << std::endl;
	fairy.attack("Forest Invader");
	fairy.printStatus();

	std::cout << "\n" << RED << "=== Taking damage from dark magic ===" << RESET << std::endl;
	fairy.takeDamage(5);
	fairy.printStatus();

	std::cout << "\n" << GREEN << "=== Healing with forest's blessing ===" << RESET << std::endl;
	fairy.beRepaired(7);
	fairy.printStatus();

	std::cout << "\n" << MAGENTA << "=== Using up energy fighting all the dark spirits ===" << RESET << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		fairy.attack("Dark spirits");
		fairy.printStatus();
	}

	std::cout << "\n" << RED << "=== Attempting attack with no energy left ===" << RESET << std::endl;
	fairy.attack("Last dark spirit");
	fairy.printStatus();

	std::cout << "\n" << RED << "=== Taking heavy damage from a dark curse ===" << RESET << std::endl;
	fairy.takeDamage(20);
	fairy.printStatus();

	std::cout << "\n" << YELLOW << "=== Trying to heal when too weak ===" << RESET << std::endl;
	fairy.beRepaired(10);
	fairy.printStatus();

	std::cout << "\n" << CYAN << "=== End of the Forest Training ===" << RESET << std::endl;

	return 0;
}