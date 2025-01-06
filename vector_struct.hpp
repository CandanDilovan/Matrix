/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_struct.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:16 by dcandan           #+#    #+#             */
/*   Updated: 2025/01/06 14:56:46 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_STRUCT_HPP
# define VECTOR_STRUCT_HPP


#include "all_include.hpp"

struct Matrix;

struct Vector {
    private:
        std::vector<float> vect;
        int vect_size;
        Vector();
    
    public:
    
        Vector(std::vector<float> vect);
        Vector(const Vector & src);
        ~Vector();

        Vector &operator=(Vector const & rhs);
        Vector operator+(Vector & rhs) const;
        Vector operator-(Vector & rhs) const;
        Vector operator*(Vector & rhs) const;
        Vector operator*(float rhs) const;

        std::vector<float>      getVect();
        int                     size() const;
        void                    display();

        Matrix                  reshape(unsigned long width);

        void                  add(Vector &added);
        void                  sub(Vector &subbed);
        void                  scl(float multiplier);

        float                 dot(Vector &dotproduct);


        Vector                linear_combination();
};

#endif