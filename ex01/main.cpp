/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:11:14 by acomet            #+#    #+#             */
/*   Updated: 2024/01/26 18:51:37 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){

	Zombie	aligato;
	Zombie	*horde;
	Zombie	*neg;
	Zombie	*int_max;
	int		i = 0;

	horde = aligato.zombieHorde(10, "BOB");
	neg = aligato.zombieHorde(-7, "NEG");
	while (i < 10)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	int_max = aligato.zombieHorde(2147483647, "int_max");
	return (0);
}
