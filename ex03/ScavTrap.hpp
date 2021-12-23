/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:43:58 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/23 12:37:35 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &obj);
		ScavTrap(const std::string &name);

		ScavTrap	&operator=(const ScavTrap &rhs);

		void		attack(const std::string &target);
		void		guardGate(void);
};

#endif
