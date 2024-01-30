/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:21:46 by acomet            #+#    #+#             */
/*   Updated: 2024/01/26 19:28:04 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H
# define HARL_CLASS_H

#include <iostream>
#include <string>

class	Harl {

public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);

private:

	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);

};

typedef	void (Harl::*noforest)();

#endif
