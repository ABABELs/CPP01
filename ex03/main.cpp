/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:08:22 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 16:18:45 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.Class.hpp"
#include "HumanB.Class.hpp"
#include "Weapon.Class.hpp"

int main()
{
    {
		Weapon	club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
    	club.setType("some other type of club");
    	bob.attack();
  	}
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
    return 0;
}