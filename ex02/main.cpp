/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:36:59 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/24 19:58:00 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << CYAN << "Welcome to the Enchanted Fairy Forest!" << RESET << std::endl;

    std::cout << "\n" << YELLOW << "=== Summoning a Gentle Forest Sprite ===" << RESET << std::endl;
    ClapTrap ct("Luna");
    ct.printStatus();

    std::cout << "\n" << MAGENTA << "--- Basic trials for Luna the Sprite ---" << RESET << std::endl;
    ct.attack("wicked thorn");
    ct.printStatus();
    ct.takeDamage(20);
    ct.printStatus();
    ct.beRepaired(10);
    ct.printStatus();

    std::cout << "\n" << YELLOW << "=== Summoning the Gatekeeper Fairy ===" << RESET << std::endl;
    ScavTrap st("Sylva");
    st.printStatus();

    std::cout << "\n" << MAGENTA << "--- Basic trials for Sylva the Gatekeeper ---" << RESET << std::endl;
    st.attack("mischievous pixie");
    st.printStatus();
    st.takeDamage(25);
    st.printStatus();
    st.beRepaired(15);
    st.printStatus();
    std::cout << BLUE;  // Specific skill in blue for emphasis
    st.guardGate();  // specific ScavTrap skill
    std::cout << RESET;
    st.printStatus();

    std::cout << "\n" << YELLOW << "=== Summoning the Fierce Frag Fairy ===" << RESET << std::endl;
    FragTrap ft("Flora");
    ft.printStatus();

    std::cout << "\n" << MAGENTA << "--- Basic trials for Flora the Fierce ---" << RESET << std::endl;
    ft.attack("dark shadow");
    ft.printStatus();
    ft.takeDamage(30);
    ft.printStatus();
    ft.beRepaired(20);
    ft.printStatus();
    std::cout << GREEN;  // FragTrap special skill in green (high five = positive)
    ft.highFivesGuys();  // specific FragTrap skill
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