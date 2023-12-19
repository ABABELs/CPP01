/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:50:06 by babels            #+#    #+#             */
/*   Updated: 2023/12/19 15:16:27 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.Class.hpp"

Harl::Harl(char **argv) : _level(argv[1])
{
    return ;
}

Harl::~Harl(void)
{
    return ;
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFOS", "WARNING", "ERROR"};
    void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::infos, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            (this->*ptr[i])();
    }
}

void    Harl::debug(void)
{
   std::cout << "DEBUG, I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::infos(void)
{
    std::cout << "INFOS, I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "WARNING, I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "ERROR, This is unacceptable, I want to speak to the manager now." << std::endl;
}