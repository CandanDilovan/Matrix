/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_struct.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:16 by dcandan           #+#    #+#             */
/*   Updated: 2025/01/09 16:38:00 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_STRUCT_HPP
# define VECTOR_STRUCT_HPP


#include "all_include.hpp"
#include "matrix_struct.hpp"


template <typename T>
struct Matrix;

template<typename T>
struct Vector {
    private:
        std::vector<T> vect;
        int vect_size;
        Vector<T>();
    
    public:
    
        Vector(std::vector<T> vect);
        Vector(const Vector<T> & src);
        ~Vector();

        Vector<T> &operator=(Vector<T> const & rhs);
        Vector<T> operator+(Vector<T> & rhs) const;
        Vector<T> operator-(Vector<T> & rhs) const;
        Vector<T> operator*(Vector<T> & rhs) const;
        Vector<T> operator*(float rhs) const;

        std::vector<T>          getVect();
        int                     size() const;
        void                    display();

        Matrix<T>                  reshape(unsigned long width);

        void                  add(Vector<T> &added);
        void                  sub(Vector<T> &subbed);
        void                  scl(float multiplier);

        float                 dot(Vector<T> &dotproduct);


        float                   norm();
        float                   norm_1();
        float                   norm_inf();

        Vector<T>                linear_combination();
};

# include "vector_struct.tpp"

#endif