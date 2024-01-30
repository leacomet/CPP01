/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:27:49 by acomet            #+#    #+#             */
/*   Updated: 2024/01/26 17:29:41 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {

	this->_Weapon = NULL;
	return;
}

HumanB::~HumanB(void){

	return;
}

void	HumanB::attack(void){

	std::cout << this->_name << " attacks";
	if (this->_Weapon)
		std::cout << " with their " << this->_Weapon->getType();
	std::cout << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon){

	this->_Weapon = &weapon;
	return;
}
