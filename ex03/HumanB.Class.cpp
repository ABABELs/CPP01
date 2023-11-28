/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:13:04 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 16:01:25 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.Class.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
    return ;
}
