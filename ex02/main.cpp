/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:36:59 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/22 19:14:38 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Création d'un ClapTrap ===" << std::endl;
    ClapTrap ct("CL4P-TP");
    ct.printStatus();

    std::cout << "\n--- Tests de base pour ClapTrap ---" << std::endl;
    ct.attack("un ennemi");
    ct.printStatus();
    ct.takeDamage(20);
    ct.printStatus();
    ct.beRepaired(10);
    ct.printStatus();

    std::cout << "\n=== Création d'un ScavTrap ===" << std::endl;
    ScavTrap st("SC4V-TP");
    st.printStatus();

    std::cout << "\n--- Tests de base pour ScavTrap ---" << std::endl;
    st.attack("un intrus");
    st.printStatus();
    st.takeDamage(25);
    st.printStatus();
    st.beRepaired(15);
    st.printStatus();
    st.guardGate();  // fonction spécifique à ScavTrap
    st.printStatus();

    std::cout << "\n=== Création d'un FragTrap ===" << std::endl;
    FragTrap ft("FR4G-TP");
    ft.printStatus();

    std::cout << "\n--- Tests de base pour FragTrap ---" << std::endl;
    ft.attack("un ennemi");
    ft.printStatus();
    ft.takeDamage(30);
    ft.printStatus();
    ft.beRepaired(20);
    ft.printStatus();
    ft.highFivesGuys();  // fonction spécifique à FragTrap
    ft.printStatus();

    std::cout << "\n--- Test constructeur de copie FragTrap ---" << std::endl;
    FragTrap ft2 = ft;
    ft2.printStatus();
    ft2.attack("un autre ennemi");
    ft2.printStatus();

    std::cout << "\n=== Fin des tests, destruction en chaîne ===" << std::endl;

    return 0;
}