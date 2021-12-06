/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:26:35 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/03 16:34:36 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("CL4P-TP"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "*robotic noises* Hello, this is ClapTrap " << this->_name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " is scrapped" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "*robotic noises* Hello, this is ClapTrap " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "*robotic noises* Hello, this is ClapTrap " << this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

const std::string	&ClapTrap::getName(void) const
{
	return this->_name;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " does not have enough energy points to attack..." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitpoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already KO..." << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " recovers " << amount << " points of damage!" << std::endl;
	this->_hitpoints += amount;
}
