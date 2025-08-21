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
    ClapTrap clap("Clappy");

    clap.attack("Ghost target");

    clap.takeDamage(3);

    clap.beRepaired(5);

    // test si on vide l'energie
    for (int i = 0; i < 10; ++i)
        clap.attack("Training Bot");

    // essai d'attaque avec 0 energie
    clap.attack("Last Bot");

    // essai reparation avec 0 energie
    clap.beRepaired(2);

    // subir des degats fatal
    clap.takeDamage(20);

    // essais d'action apres destruction
    clap.attack("Ghost target");
    clap.beRepaired(5);

    return (0);
}