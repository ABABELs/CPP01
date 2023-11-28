/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:12:50 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 16:01:12 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.Class.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    return ;
}
