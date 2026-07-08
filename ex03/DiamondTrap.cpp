/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 13:27:27 by asando            #+#    #+#             */
/*   Updated: 2026/07/08 13:53:44 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(void)
	: ClapTrap("Default_clap_name"), ScavTrap(), FragTrap() {
	_name = "Default";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Diamond default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
		_name = name;
		_hitPoints = FragTrap::_hitPoints;
		_energyPoints = ScavTrap::_energyPoints;
		_attackDamage = FragTrap::_attackDamage;

		std::cout << "Diamond constructor called for "<< _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), ScavTrap(other), FragTrap(other) {
		*this = other;
		std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs) {
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
		ScavTrap::operator=(rhs);
		FragTrap::operator=(rhs);
		_name = rhs._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called for " << _name << std::endl;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap " << _name
		<< " and ClapTrap name is " << ClapTrap::_name
		<< std::endl;
}
