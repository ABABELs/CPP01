/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Classe.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:08:44 by babels            #+#    #+#             */
/*   Updated: 2023/12/19 14:00:08 by aabel            ###   ########.fr       */
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