/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:19:12 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 14:27:18 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Classe.hpp"

int main(void)
{
    Zombie  *horde;
    
    horde = zombieHorde(5, "Zombienne");
    for (int i = 0; i < 5; i++)
        horde[i].talking();
    delete [] horde;
    return (0);
}