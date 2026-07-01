/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:25:28 by asando            #+#    #+#             */
/*   Updated: 2026/07/01 12:14:13 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class	ClapTrap {
	private:
		std::string _name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap&	operator=(const ClapTrap& rhs);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
