/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Classe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:20:43 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 14:34:10 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASSE_HPP
# define ZOMBIE_CLASSE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
    public:
            Zombie(void);
            ~Zombie(void);
            void talking(void);
            void setName(std::string name);
    private:
            std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif