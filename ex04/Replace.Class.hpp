/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:51:20 by babels            #+#    #+#             */
/*   Updated: 2023/11/29 15:23:25 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_CLASS_HPP
# define REPLACE_CLASS_HPP

#include "Loser.hpp"

class Replace
{
    public:
        Replace(char **argv);
        ~Replace(void);
        void replace_line(void);
    private:
        void change_occ(void);
        void write_file(void);
        std::string _line;
        std::string _filename;
        std::string _s1;
        std::string _s2;
};

#endif