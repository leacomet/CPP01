/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:27:49 by acomet            #+#    #+#             */
/*   Updated: 2024/01/23 18:04:00 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string init_name) : _name(init_name) {

	return;
}

Zombie::~Zombie(void){

	std::cout << "Destructor " << this->_name << " Called" << std::endl;
	return;
}

void	Zombie::announce(void){

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
