/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:11:55 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/23 12:33:39 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &obj);
		ClapTrap(const std::string &name);

		ClapTrap			&operator=(const ClapTrap &rhs);

		const std::string	&getName(void) const;
		virtual void		attack(const std::string &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);

	protected:
		std::string			_name;
		int					_hitpoints;
		int					_energy_points;
		int					_attack_damage;
};

#endif
