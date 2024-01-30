/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:21:46 by acomet            #+#    #+#             */
/*   Updated: 2024/01/26 18:25:29 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

class	Zombie {

public:

	Zombie(void);
	~Zombie(void);

	void	announce(void);
	void	set_name(std::string name);
	Zombie*	zombieHorde(int N, std::string name);

private:

	std::string	_name;

};

#endif
