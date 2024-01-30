/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:27:49 by acomet            #+#    #+#             */
/*   Updated: 2024/01/23 18:13:05 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :  _type(type) {

	return;
}

Weapon::~Weapon(void){

	return;
}

std::string const	&Weapon::getType(void){

	std::string const	&str = this->_type;

	return (str);
}

void	Weapon::setType(std::string type){

	this->_type = type;
	return;
}
