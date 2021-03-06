/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:02:28 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/23 12:38:07 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &obj);

		FragTrap	&operator=(const FragTrap &rhs);

		void		attack(const std::string &target);
		void		highFiveGuys(void);
};

#endif
