/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:27:49 by acomet            #+#    #+#             */
/*   Updated: 2024/01/26 19:40:24 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){

	return;
}

Harl::~Harl(void){

	return;
}

void	Harl::complain(std::string level){

	noforest	complaints[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	all_levels[4] = {"debug", "info", "warning", "error"};
	int			i = 0;

	while (i < 4)
	{
		if (all_levels[i] == level)
		{
			(this->*complaints[i])();
			return;
		}
		i++;
	}
	std::cout << "[Probably complaining about insignificant problems]" << std::endl;
	return;
}

void	Harl::_debug(void){

	std::cout << "DEBUG : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return;
}

void	Harl::_info(void){

	std::cout << "INFO : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void	Harl::_warning(void){

	std::cout << "WARNING : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::_error(void){

	std::cout << "ERROR : This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}
