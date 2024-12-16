/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:00:07 by dcandan           #+#    #+#             */
/*   Updated: 2024/12/16 16:17:45 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_include.hpp"
#include "iostream"

int main()
{   
    // Matrix oui({
    //     {10, 10.5, 10.51654},
    //     {10, 10.5, 10.51654},
    //     {10, 10.5, 10.51654},
    //     {10, 10.5},

    // });

    // Vector new_vect = oui.reshape();
    // Matrix new_matrix = new_vect.reshape(3);
    // new_vect.display();
    // new_matrix.display();
    // oui.is_square();
    // oui.shape();
    // oui.display();
    try{

        std::vector<float> vect_1 = {1, 2, 3.5};
        std::vector<float> vect_2 = {2.3, 4, 2.4};

        Vector vect1 = Vector(vect_1);
        vect1.display();
        Vector vect2 = Vector(vect_2);
        vect1.add(vect2);
        vect1.display();
        vect1.sub(vect2);
        vect1.display();
        vect1.scl(-5);
        vect1.display();
        return (0);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}