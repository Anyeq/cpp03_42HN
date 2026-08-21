/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:25:14 by asando            #+#    #+#             */
/*   Updated: 2026/08/21 11:07:41 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap scavA("scavObject");
    ScavTrap scavB("scavObjectEnemy");

	FragTrap fragX("fragObject");
	FragTrap fragY("fragObjectEnemy");

    scavA.attack("scavObjectEnemy");
    scavB.takeDamage(20);
    scavB.attack("scavObject");
    scavA.takeDamage(5);


    fragX.attack("fragObjectEnemy");
    fragY.takeDamage(20);
    fragY.attack("fragObject");
    fragX.takeDamage(5);

    scavA.beRepaired(10);
	fragX.beRepaired(20);

    scavA.guardGate();
	fragX.highFivesGuys();

    return 0;
}
