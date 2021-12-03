/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:34:18 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/03 12:13:45 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	// Orthodox canonical class verifications
	ClapTrap	ct1;
	ClapTrap	ct2("R2D2");
	ClapTrap	ct1_copy(ct1);
	ClapTrap	ct2_copy = ct2;

	// ct1 -> ct2
	ct1.attack(ct2.getName());
	ct2.takeDamage(0);
	ct2_copy.beRepaired(0);
	// ct1_copy -> ct2_copy
	ct1_copy.attack(ct2_copy.getName());
	ct2_copy.takeDamage(0);
	ct2_copy.beRepaired(0);
	return 0;
}
