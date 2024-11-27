/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_struct.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:43:16 by dcandan           #+#    #+#             */
/*   Updated: 2024/11/27 14:35:11 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_STRUCT_HPP
# define VECTOR_STRUCT_HPP

# include <string>
# include <iostream>

struct Vector {
    private:
        float *vect;
        Vector();
    
    public:
    
        Vector(float *vect);
        Vector(const Vector & src);
        ~Vector();

        Vector &operator=(Vector const & rhs);

        std::string     getVect();
        int             size();
};

#endif