/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:21:46 by acomet            #+#    #+#             */
/*   Updated: 2024/01/26 18:50:41 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name){

	Zombie	*horde;
	int		i;

	if (N <= 0)
	{
		std::cout << "Put a valid number to create a horde" << std::endl;
		return (NULL);
	}
	horde = new (std::nothrow) Zombie[N];
	if (!horde)
	{
		std::cout << "Bad allocation" << std::endl;
		return (NULL);
	}
	i = 0;
	while (i < N)
	{
		horde[i].set_name(name);
		i++;
	}
	return (horde);
}
