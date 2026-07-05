/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:25:42 by asando            #+#    #+#             */
/*   Updated: 2026/07/05 16:20:10 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
	: _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs) {
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this != &rhs) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ClapTrap" << _name << "can not attack!" << std::endl;
		return ;
	}

	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target 
		<< ", causing " << _attackDamage << " points of damage!"
		<< std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	_hitPoints -= amount;
	if (_hitPoints < 0) {
		_hitPoints = 0;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount
		<< " damage! HP now: " << _hitPoints << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " cannot repair!" << std::endl;
		return;
    }
    _energyPoints--;
    _hitPoints += amount;
	std::cout << "ClapTrap " << _name << " repairs itself for "
		<< amount << " HP! HP now: " << _hitPoints << std::endl;
	return ;
}
