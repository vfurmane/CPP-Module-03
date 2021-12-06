/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:34:18 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/06 11:26:43 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	// Orthodox canonical class verifications
	DiamondTrap	dt1;
	DiamondTrap	dt2("R2D2");
	DiamondTrap	dt1_copy(dt1);
	DiamondTrap	dt2_copy = dt2;

	// dt1 -> dt2
	dt1.attack(dt2.getName());
	dt2.takeDamage(30);
	dt2_copy.beRepaired(30);
	// dt1_copy -> dt2_copy
	dt1_copy.attack(dt2_copy.getName());
	dt2_copy.takeDamage(30);
	dt2_copy.beRepaired(30);

	dt1.whoAmI();
	dt2.whoAmI();
	dt1_copy.whoAmI();
	dt2_copy.whoAmI();
	return 0;
}
