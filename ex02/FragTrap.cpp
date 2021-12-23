/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:02:17 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/23 12:26:30 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FR4G-TP")
{
	std::cout << "*inaudible noises* This is FragTrap " << this->_name << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " is not responding" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	*this = obj;
	std::cout << "*inaudible noises* This is FragTrap " << this->_name << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "*inaudible noises* This is FragTrap " << this->_name << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0)
	{
		std::cout << "FragTrap " << this->_name << " scratches " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "FragTrap " << this->_name << " does not have enough energy points to attack..." << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " requests a high five !" << std::endl;
}
