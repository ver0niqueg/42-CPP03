/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:36:59 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/25 16:06:13 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << CYAN << "Welcome to the Enchanted Fairy Forest!" << RESET << std::endl;

	std::cout << "\n" << YELLOW << "=== Summoning the Forest Queen Fairy ===" << RESET << std::endl;
	ClapTrap ct("Nymera");
	ct.printStatus();

	std::cout << "\n" << MAGENTA << "--- Basic trials for Nymera ---" << RESET << std::endl;
	ct.attack("wicked witch");
	ct.printStatus();
	ct.takeDamage(20);
	ct.printStatus();
	ct.beRepaired(10);
	ct.printStatus();

	std::cout << "\n" << YELLOW << "=== Summoning the Forest Guardian Fairy ===" << RESET << std::endl;
	ScavTrap st("Seraphina");
	st.printStatus();

	std::cout << "\n" << MAGENTA << "--- Basic trials for Seraphina ---" << RESET << std::endl;
	st.attack("mischievous goblin");
	st.printStatus();
	st.takeDamage(25);
	st.printStatus();
	st.beRepaired(15);
	st.printStatus();
	std::cout << GREEN;
	st.guardGate();
	std::cout << RESET;
	st.printStatus();

	std::cout << "\n" << YELLOW << "=== Summoning the Forest Fierce Fairy ===" << RESET << std::endl;
	FragTrap ft("Flora");
	ft.printStatus();

	std::cout << "\n" << MAGENTA << "--- Basic trials for Flora ---" << RESET << std::endl;
	ft.attack("dark shadow");
	ft.printStatus();
	ft.takeDamage(30);
	ft.printStatus();
	ft.beRepaired(20);
	ft.printStatus();
	std::cout << GREEN;
	ft.highFivesGuys();
	std::cout << RESET;
	ft.printStatus();

	std::cout << "\n" << YELLOW << "--- Testing FragTrap copy constructor ---" << RESET << std::endl;
	FragTrap ft2 = ft;
	ft2.printStatus();
	ft2.attack("another shadow");
	ft2.printStatus();

	std::cout << "\n" << CYAN << "=== End of the fairy tales, the forest falls silent... ===" << RESET << std::endl;

	return 0;
}