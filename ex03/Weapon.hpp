/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:21:46 by acomet            #+#    #+#             */
/*   Updated: 2023/12/19 22:42:58 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <iostream>
#include <string>

class	Weapon {

public:

	Weapon(std::string type);
	~Weapon(void);

	std::string const	&getType(void);
	void				setType(std::string name);

private:

	std::string _type;

};

#endif
