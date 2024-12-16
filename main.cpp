/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:00:07 by dcandan           #+#    #+#             */
/*   Updated: 2024/12/16 15:14:42 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_include.hpp"
#include "iostream"

int main()
{   
    Matrix oui({
        {10, 10.5, 10.51654},
        {10, 10.5, 10.51654},
        {10, 10.5, 10.51654},
        {10, 10.5},

    });

    Vector new_vect = oui.reshape();
    Matrix new_matrix = new_vect.reshape(3);
    new_vect.display();
    new_matrix.display();
    oui.is_square();
    oui.shape();
    oui.display();
    return (0);
}