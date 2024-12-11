/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_struct.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:12 by dcandan           #+#    #+#             */
/*   Updated: 2024/12/11 13:00:07 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_STRUCT_HPP
# define MATRIX_STRUCT_HPP

# include <string>
# include <iostream>
# include <array>
# include <iterator>
# include <vector>
# include "vector_struct.hpp"

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

        std::vector<std::vector<float>>     getVect();
        int                                 is_square();
        int                                 size();
        void                                display();

        Vector                              reshape();
};

#endif