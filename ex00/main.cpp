/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:40:42 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 14:14:33 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"

int main(void)
{
    Zombie* Zombienne;

    Zombienne = newZombie("HENRY");
    Zombienne->talking();
    delete Zombienne;
    randomChump("JULIE");
    return (0);
}