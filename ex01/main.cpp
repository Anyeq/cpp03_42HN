/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:25:14 by asando            #+#    #+#             */
/*   Updated: 2026/07/05 14:40:52 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap a("Giant");
	ClapTrap b("Enemy");

	a.attack("Enemy");
	b.takeDamage(5);

	b.attack("Giant");
	a.takeDamage(3);
	
	a.beRepaired(4);
	b.beRepaired(2);
	return (0);
}
