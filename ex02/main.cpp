/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:29:23 by acomet            #+#    #+#             */
/*   Updated: 2023/12/18 20:48:29 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void){

	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "The memory address of string = " << &string << std::endl;
	std::cout << "The memory address of stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address of stringREF = " << &stringREF << std::endl;

	std::cout << "The value of string = " << string << std::endl;
	std::cout << "The value of stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value of stringREF = " << stringREF << std::endl;
}
