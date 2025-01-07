/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_struct.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:12 by dcandan           #+#    #+#             */
/*   Updated: 2025/01/07 15:51:01 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_STRUCT_HPP
# define MATRIX_STRUCT_HPP

# include "all_include.hpp"
# include "vector_struct.hpp"


template<typename T>
struct Vector;

template<typename T>
struct Matrix {
    private:
        std::vector<std::vector<T>> matrix;
        Matrix();

        void MatrixError(Matrix<T> &check);

    public:
    
        Matrix(std::vector<std::vector<T>> matrix);
        Matrix(const Matrix<T> & src);
        ~Matrix();

        Matrix<T> &operator=(Matrix<T> const & rhs);
        Matrix<T> operator+(Matrix<T> & rhs) const;
        Matrix<T> operator-(Matrix<T> & rhs) const;
        Matrix<T> operator*(float rhs) const;

        std::vector<std::vector<T>>         getMatrix();
        int                                 is_square();
        std::vector<unsigned long>          shape();
        void                                display();

        void                                add(Matrix<T> &added);
        void                                sub(Matrix<T> &subbed);
        void                                scl(float multiplier);

        Vector<T>                             reshape();

};

# include "matrix_struct.tpp"

#endif