/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:53:09 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/23 12:07:08 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("SC4V-TP")
{
	std::cout << "*chaotic noises* This is ScavTrap " << this->_name << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " is out of order" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	*this = obj;
	std::cout << "*chaotic noises* This is ScavTrap " << this->_name << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "*chaotic noises* This is ScavTrap " << this->_name << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0)
	{
		std::cout << "ScavTrap " << this->_name << " throws things at " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " does not have enough energy points to attack..." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has activated gate keeper mode" << std::endl;
}
