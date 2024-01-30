/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:11:14 by acomet            #+#    #+#             */
/*   Updated: 2024/01/23 17:59:19 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){

	Zombie	aligato("aligato");
	Zombie	*newbie;

	aligato.announce();
	newbie = aligato.newZombie("newbie");
	aligato.randomChump("sprinter");
	delete newbie;
	return (0);
}
