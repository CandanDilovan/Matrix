/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_struct.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:16 by dcandan           #+#    #+#             */
/*   Updated: 2024/11/28 15:24:54 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_STRUCT_HPP
# define VECTOR_STRUCT_HPP

# include <string>
# include <iostream>
# include <array>
# include <iterator>

struct Vector {
    private:
        float *vect;
        int vect_size;
        Vector();

        std::string remove_zero(std::string number);
    
    public:
    
        Vector(float *vect, int size);
        Vector(const Vector & src);
        ~Vector();

        Vector &operator=(Vector const & rhs);

        float   *getVect();
        int     size();
        void    display();
};

#endif