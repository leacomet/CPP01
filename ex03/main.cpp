/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:11:14 by acomet            #+#    #+#             */
/*   Updated: 2024/01/23 18:22:32 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void){

	Weapon	lucy("bat");
	Weapon	ouioui("katana");
	Weapon	takebe4leaving("crossbow");
	HumanA	Michone("Michone", ouioui);
	HumanB	Daryl("Daryl");

	std::cout << "the weapon named lucy is a " << lucy.getType() << std::endl;
	Michone.attack();
	Daryl.attack();
	std::cout << "Daryl forgot his weapon" << std::endl;
	Daryl.setWeapon(takebe4leaving);
	Daryl.attack();
	return (0);
}
