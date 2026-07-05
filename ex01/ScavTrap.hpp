/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 14:44:48 by asando            #+#    #+#             */
/*   Updated: 2026/07/05 16:20:14 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& rhs);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();

};
#endif
