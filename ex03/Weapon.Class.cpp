/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:15:53 by babels            #+#    #+#             */
/*   Updated: 2023/12/19 14:35:19 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.Class.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

void Weapon::setType(std::string type)
{
    std::cout << "Weapon type changed to " << type << std::endl;
    this->_type = type;
    return ;
}

const   std::string &Weapon::getType(void)
{
    std::string &stringREF = this->_type;
    return (stringREF);
}