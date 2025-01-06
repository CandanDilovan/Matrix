/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_struct.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:12 by dcandan           #+#    #+#             */
/*   Updated: 2025/01/06 14:54:43 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_STRUCT_HPP
# define MATRIX_STRUCT_HPP

# include "all_include.hpp"

struct Vector;

struct Matrix {
    private:
        std::vector<std::vector<float>> matrix;
        Matrix();

        void MatrixError(Matrix &check);

    public:
    
        Matrix(std::vector<std::vector<float>> matrix);
        Matrix(const Matrix & src);
        ~Matrix();

        Matrix &operator=(Matrix const & rhs);
        Matrix operator+(Matrix & rhs) const;
        Matrix operator-(Matrix & rhs) const;
        Matrix operator*(float rhs) const;

        std::vector<std::vector<float>>     getMatrix();
        int                                 is_square();
        std::vector<unsigned long>          shape();
        void                                display();

        void                                add(Matrix &added);
        void                                sub(Matrix &subbed);
        void                                scl(float multiplier);

        Vector                              reshape();

};

#endif