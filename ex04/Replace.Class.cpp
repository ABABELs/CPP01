/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:54:29 by babels            #+#    #+#             */
/*   Updated: 2023/12/11 14:40:17 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.Class.hpp"

Replace::Replace(char **argv) : _filename(argv[1]), _s1(argv[2]), _s2(argv[3])
{
    return ;
}

Replace::~Replace(void)
{
    return ;
}

void	Replace::replace_line(void)
{
	std::ifstream 	file(this->_filename);
	std::string 	buffer;

	std::getline(file, buffer);
	if (!file.is_open())
	{
		std::cout << "Error: Can't open file" << std::endl;
		return ;
	}
	else
	{
		while (file)
		{
			this->_line += buffer;
			this->_line += "\n";
			std::getline(file, buffer);
		}
		this->change_occ();
	}
	file.close();
	this->write_file();
}

void	Replace::change_occ(void)
{
	int index;
	
	index = this->_line.find(this->_s1);
	if (this->_s1 == this->_s2)
		return ;
	while (index >= 0)
	{
		this->_line.erase(index, this->_s1.length());
		this->_line.insert(index, this->_s2);
		index = this->_line.find(this->_s1, index + this->_s2.length());
		std::cout << index << std::endl;
	}
	return ;
}

void	Replace::write_file(void)
{
	std::ofstream	ofs(this->_filename.insert(this->_filename.length(),".replace"));

	ofs << this->_line;
	ofs.close();
}