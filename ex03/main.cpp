/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:25:14 by asando            #+#    #+#             */
/*   Updated: 2026/08/21 14:21:15 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap d("Alex");

	d.attack("Enemy");
	d.whoAmI();

	d.takeDamage(20);
	d.beRepaired(10);
	d.highFivesGuys();
	d.guardGate();

	return 0;
}
