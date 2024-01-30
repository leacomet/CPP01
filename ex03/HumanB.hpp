/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:21:46 by acomet            #+#    #+#             */
/*   Updated: 2024/01/23 18:12:44 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAB_CLASS_H
# define HUMAB_CLASS_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB {

public:

	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon &weapon);

private:

	std::string	_name;
	Weapon		*_Weapon;

};

#endif
