/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:00:07 by dcandan           #+#    #+#             */
/*   Updated: 2025/01/08 14:36:26 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_include.hpp"
#include "iostream"
#include "vector_struct.hpp"
#include "matrix_struct.hpp"


int main()
{   
    try{
        //ex00
        //----------------------------------------------------------------------------
        // std::vector<float> vect_1 = {1, 2, 3.5};
        // std::vector<float> vect_2 = {2.3, 4, 2.4};

        // Vector<float> vect1 = Vector<float>(vect_1);
        // vect1.display();
        // Vector<float> vect2 = Vector<float>(vect_2);
        // vect1.add(vect2);
        // vect1.display();
        // vect1.sub(vect2);
        // vect1.display();
        // vect1.scl(-5);
        // vect1.display();
        // return (0);

        
        // Matrix<float> oui({
        // {10, 10.5, 10.51654},
        // {10, 10.5, 10.51654},
        // {10, 10.5, 10.51654},
        // {10, 10.5},
        // });

        // Matrix<float> non({
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

        // Vector<float> one({1, 0, 0});
        // Vector<float> two({0, 1, 0});
        // Vector<float> three({0, 0, 1});



        // Vector<float> lc = linear_combination<float>({one, two, three}, {10, -2, 0.5});
        // lc.display();


        // Vector<float> oneone({1, 2, 3});
        // Vector<float> twotwo({0, 10, -100});


        // Vector<float> lv = linear_combination<float>({oneone, twotwo}, {10, -2});
        // lv.display();

        //ex02
        //----------------------------------------------------------------------------

        // Vector<float> v1 = Vector<float>({2., 1.});
        // Vector<float> v2 = Vector<float>({4., 2.});

        // Vector<float> test = linear_interpolation(v1, v2, 0.3);
        // test.display();

        // Matrix<float> m1({{2., 1.}, {3., 4.}});
        // Matrix<float> m2({{20., 10.}, {30., 40.}});
        
        // Matrix<float> testm = linear_interpolation(m1, m2, 0.5);
        // testm.display();

        // ex03
        //----------------------------------------------------------------------------


        // Vector<float> t1({2., 1.});
        // Vector<float> t2({4, 2.});

        // std::cout << t1.dot(t2) << std::endl;
        // t1.display();

        // ex04
        //----------------------------------------------------------------------------

        Vector<float> t1({1., 2., 3.});
        std::cout << t1.norm_1() << ', ' << t1.norm() << ", " << t1.norm_inf() << std::endl;


        Vector<float> t2({-1., -2.});
        std::cout << t2.norm_1() << ', ' << t2.norm() << ", " << t2.norm_inf() << std::endl;

    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}