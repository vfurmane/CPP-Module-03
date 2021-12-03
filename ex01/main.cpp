/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:34:18 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/03 14:49:07 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	// Orthodox canonical class verifications
	ScavTrap	st1;
	ScavTrap	st2("R2D2");
	ScavTrap	st1_copy(st1);
	ScavTrap	st2_copy = st2;

	// st1 -> st2
	st1.attack(st2.getName());
	st2.takeDamage(20);
	st2_copy.beRepaired(20);
	// st1_copy -> st2_copy
	st1_copy.attack(st2_copy.getName());
	st2_copy.takeDamage(0);
	st2_copy.beRepaired(0);

	st2.guardGate();
	return 0;
}
