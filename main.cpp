/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:00:07 by dcandan           #+#    #+#             */
/*   Updated: 2024/12/18 15:49:37 by dcandan          ###   ########.fr       */
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
        //ex00
        //----------------------------------------------------------------------------
        // std::vector<float> vect_1 = {1, 2, 3.5};
        // std::vector<float> vect_2 = {2.3, 4, 2.4};

        // Vector vect1 = Vector(vect_1);
        // vect1.display();
        // Vector vect2 = Vector(vect_2);
        // vect1.add(vect2);
        // vect1.display();
        // vect1.sub(vect2);
        // vect1.display();
        // vect1.scl(-5);
        // vect1.display();
        // return (0);

        
        // Matrix oui({
        // {10, 10.5, 10.51654},
        // {10, 10.5, 10.51654},
        // {10, 10.5, 10.51654},
        // {10, 10.5},
        // });

        // Matrix non({
        // {10, 10.5, 10.51654},
        // {10, 10.5, 10.51654},
        // {10, 10.5, 10.51654},
        // {10, 10.5},
        // });

        // oui.add(non);
        // oui.display();
        // oui.sub(non);
        // oui.display();
        // oui.scl(3);
        // oui.display();

        //ex01
        //----------------------------------------------------------------------------

        Vector one({1, 0, 0});
        Vector two({0, 1, 0});
        Vector three({0, 0, 1});



        Vector lc = linear_combination({one, two, three}, {10, -2, 0.5});
        lc.display();


        Vector oneone({1, 2, 3});
        Vector twotwo({0, 10, -100});



        Vector lc = linear_combination({oneone, twotwo}, {10, -2});
        lc.display();

    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}