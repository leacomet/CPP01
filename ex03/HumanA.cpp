/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:27:49 by acomet            #+#    #+#             */
/*   Updated: 2024/01/23 18:12:18 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _Weapon(weapon) {

	return;
}

HumanA::~HumanA(void){

	return;
}

void	HumanA::attack(void){

	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
	return;
}

void	HumanA::setWeapon(Weapon weapon){

	this->_Weapon = weapon;
	return;
}
