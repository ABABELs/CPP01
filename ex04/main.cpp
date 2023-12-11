/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:38:38 by babels            #+#    #+#             */
/*   Updated: 2023/12/11 14:15:44 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Loser.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    else
    {
        Replace replace(argv);
        replace.replace_line();
    }
    return (0);
}