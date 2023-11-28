/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:57:54 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 14:31:41 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASSE_HPP
# define ZOMBIE_CLASSE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void talking(void);
    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif