/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:21:46 by acomet            #+#    #+#             */
/*   Updated: 2024/01/23 18:12:29 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanA {

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void	attack(void);
	void	setWeapon(Weapon weapon);

private:

	std::string	_name;
	Weapon		&_Weapon;

};

#endif
