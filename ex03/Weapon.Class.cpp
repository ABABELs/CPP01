/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:15:53 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 16:17:36 by babels           ###   ########.fr       */
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
    this->_type = type;
    return ;
}

const   std::string &Weapon::getType(void)
{
    std::string &stringREF = this->_type;
    return (stringREF);
}