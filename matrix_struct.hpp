/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_struct.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:12 by dcandan           #+#    #+#             */
/*   Updated: 2024/12/09 14:53:16 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_STRUCT_HPP
# define MATRIX_STRUCT_HPP

# include <string>
# include <iostream>
# include <array>
# include <iterator>

struct Matrix {
    private:
        float *vect;
        int vect_size;
        Matrix();

        std::string remove_zero(std::string number);
    
    public:
    
        Matrix(float *vect, int size);
        Matrix(const Matrix & src);
        ~Matrix();

        Matrix &operator=(Matrix const & rhs);

        float   *getVect();
        int     is_square();
        int     size();
        void    display();

        Vector  reshape();
};

#endif