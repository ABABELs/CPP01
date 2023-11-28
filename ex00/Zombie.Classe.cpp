/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Classe.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:08:44 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 13:43:04 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " are dead, one less in the Univers!!" << std::endl;
    return ;
}

void    Zombie::talking(void)
{
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}