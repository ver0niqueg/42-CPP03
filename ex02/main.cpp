/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:36:59 by vgalmich          #+#    #+#             */
/*   Updated: 2025/08/22 14:40:04 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Création d'un FragTrap ===" << std::endl;
    FragTrap ft("FR4G-TP");

    std::cout << "\n=== Tests de base ===" << std::endl;
    ft.attack("un ennemi");
    ft.takeDamage(30);
    ft.beRepaired(20);

    std::cout << "\n=== Test de la capacité spéciale ===" << std::endl;
    ft.highFivesGuys();

    std::cout << "\n=== Test du constructeur de copie ===" << std::endl;
    FragTrap ft2 = ft;
    ft2.attack("un autre ennemi");

    std::cout << "\n=== Test limites énergie ===" << std::endl;
    for (int i = 0; i < 105; i++) {
        ft.attack("dummy target");
    }

    std::cout << "\n=== Test mort ===" << std::endl;
    ft.takeDamage(200);   // tue le FragTrap
    ft.attack("ghost");   // ne devrait pas marcher
    ft.beRepaired(50);    // ne devrait pas marcher

    std::cout << "\n=== Comparaison avec un ScavTrap ===" << std::endl;
    ScavTrap st("SC4V-TP");
    st.attack("intrus");
    st.guardGate();

    std::cout << "\n=== Fin du programme (destruction en chaîne) ===" << std::endl;
    return 0;
}