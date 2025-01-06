/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:00:07 by dcandan           #+#    #+#             */
/*   Updated: 2025/01/06 15:06:15 by dcandan          ###   ########.fr       */
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

        // Vector one({1, 0, 0});
        // Vector two({0, 1, 0});
        // Vector three({0, 0, 1});



        // Vector lc = linear_combination({one, two, three}, {10, -2, 0.5});
        // lc.display();


        // Vector oneone({1, 2, 3});
        // Vector twotwo({0, 10, -100});


        // Vector lc = linear_combination({oneone, twotwo}, {10, -2});
        // lc.display();

        //ex02
        //----------------------------------------------------------------------------

        // Vector v1 = Vector({2., 1.});
        // Vector v2 = Vector({4., 2.});

        // Vector test = linear_interpolation(v1, v2, 0.3);
        // test.display();

        // Matrix m1({{2., 1.}, {3., 4.}});
        // Matrix m2({{20., 10.}, {30., 40.}});
        
        // Matrix testm = linear_interpolation(m1, m2, 0.5);
        // testm.display();

        //ex03
        //----------------------------------------------------------------------------

        Vector v1({-1, 6});
        Vector v2({3, 2});

        // Vector v3 = v1 + v2;

        // v1.display();
        std::cout << v1.dot(v2) << std::endl;
        v1.display();

    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}