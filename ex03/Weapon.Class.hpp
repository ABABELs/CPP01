/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:16:27 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 16:17:40 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon(void);
        std::string const &getType(void);
        void setType(std::string type);
    private:
        std::string _type;
};

#endif