/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:36:59 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/22 14:56:10 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Création d'un ClapTrap ===" << std::endl;
    ClapTrap ct("CL4P-TP");

    std::cout << "\n--- Tests de base pour ClapTrap ---" << std::endl;
    ct.attack("un ennemi");
    ct.takeDamage(20);
    ct.beRepaired(10);

    std::cout << "\n=== Création d'un ScavTrap ===" << std::endl;
    ScavTrap st("SC4V-TP");

    std::cout << "\n--- Tests de base pour ScavTrap ---" << std::endl;
    st.attack("un intrus");
    st.takeDamage(25);
    st.beRepaired(15);
    st.guardGate();  // fonction spécifique à ScavTrap

    std::cout << "\n=== Création d'un FragTrap ===" << std::endl;
    FragTrap ft("FR4G-TP");

    std::cout << "\n--- Tests de base pour FragTrap ---" << std::endl;
    ft.attack("un ennemi");
    ft.takeDamage(30);
    ft.beRepaired(20);
    ft.highFivesGuys();  // fonction spécifique à FragTrap

    std::cout << "\n--- Test constructeur de copie FragTrap ---" << std::endl;
    FragTrap ft2 = ft;
    ft2.attack("un autre ennemi");

    std::cout << "\n=== Fin des tests, destruction en chaîne ===" << std::endl;

    return 0;
}