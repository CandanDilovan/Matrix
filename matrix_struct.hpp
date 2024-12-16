/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_struct.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:12 by dcandan           #+#    #+#             */
/*   Updated: 2024/12/16 15:02:47 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_STRUCT_HPP
# define MATRIX_STRUCT_HPP

# include "all_include.hpp"

struct Vector;

struct Matrix {
    private:
        std::vector<std::vector<float>> matrix;
        int vect_size;
        Matrix();

        std::string remove_zero(std::string number);
    
    public:
    
        Matrix(std::vector<std::vector<float>> matrix);
        Matrix(const Matrix & src);
        ~Matrix();

        Matrix &operator=(Matrix const & rhs);

        std::vector<std::vector<float>>     getMatrix();
        int                                 is_square();
        std::vector<unsigned long>          shape();
        void                                display();

        Vector                              reshape();
};

#endif