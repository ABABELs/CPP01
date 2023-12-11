/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:50:00 by babels            #+#    #+#             */
/*   Updated: 2023/12/11 15:03:10 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

# include <iostream>
# include <fstream>
# include <string>

class Harl
{
    public:
        Harl(char **argv);
        ~Harl(void);
        void    complain(std::string level);
    private:
        std::string _level;
        void    debug(void);
        void    infos(void);
        void    warning(void);
        void    error(void);
};

#endif
