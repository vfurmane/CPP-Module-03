/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:34:18 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/03 16:30:41 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	// Orthodox canonical class verifications
	FragTrap	ft1;
	FragTrap	ft2("R2D2");
	FragTrap	ft1_copy(ft1);
	FragTrap	ft2_copy = ft2;

	// ft1 -> ft2
	ft1.attack(ft2.getName());
	ft2.takeDamage(30);
	ft2_copy.beRepaired(30);
	// ft1_copy -> ft2_copy
	ft1_copy.attack(ft2_copy.getName());
	ft2_copy.takeDamage(30);
	ft2_copy.beRepaired(30);

	ft2.highFiveGuys();
	return 0;
}
