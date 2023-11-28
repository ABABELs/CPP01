/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.Classe.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:05:41 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 12:07:22 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *newZombie;

    newZombie = new Zombie(name);
    return (newZombie);
}