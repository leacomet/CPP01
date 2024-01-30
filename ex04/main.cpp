/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:11:14 by acomet            #+#    #+#             */
/*   Updated: 2024/01/28 18:39:27 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>

static int	verif_opened_file(std::ifstream &file, std::ofstream &file_replace, std::string filename){

	file.open(filename.c_str());
	if (!file.good())
	{
		std::cout << filename << " fail to be opened" << std::endl;
		file.close();
		file_replace.close();
		return (1);
	}
	file_replace.open((filename + ".replace").c_str());
	if (!file_replace.good())
	{
		std::cout << filename + ".replace" << " failed during creation" << std::endl;
		file.close();
		file_replace.close();
		return (1);
	}
	return (0);
}

static void	replace_homemade(std::string s1, std::string s2, std::ifstream &file, std::ofstream &file_replace, std::string buffer, size_t i)
{
	file_replace << buffer.substr(0, i);
	file_replace << s2;
	buffer.erase(0, i + s1.length());
	i = buffer.find(s1);
	if (i != std::string::npos)
		replace_homemade(s1, s2, file, file_replace, buffer, i);
	else
		file_replace << buffer;
}

int	main(int argc, char **argv){

	if (argc != 4)
	{
		std::cout << "the program must take three arguments, no less no more" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0')
	{
		std::cout << "can't replace nothing" << std::endl;
		return (1);
	}

	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	file;
	std::ofstream	file_replace;
	std::string		buffer;
	size_t			i;

	if (verif_opened_file(file, file_replace, filename))
		return (1);
	while (getline(file, buffer) && !file.bad())
	{
		i = buffer.find(s1);
		if (i != std::string::npos)
			replace_homemade(s1, s2, file, file_replace, buffer, i);
		else
			file_replace << buffer;
		if (!file.eof())
			file_replace << std::endl;
	}
	return (0);
}
