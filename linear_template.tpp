/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_template.tpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:17:17 by dcandan           #+#    #+#             */
/*   Updated: 2025/01/07 15:52:11 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_include.hpp"
#include "vector_struct.hpp"


template<typename T>
T linear_interpolation(T u, T v, float t)
{
    if (typeid(u) != typeid(v))
        throw NotSameType();
    
    T result = (v - u) * t + u;

    return (result);
}

template<typename T>
Vector<T>  linear_combination(std::vector<Vector<T>> vector_lst, std::vector<T> coefs)
{
    std::vector<Vector<T>> temp = vector_lst;

    if (vector_lst.size() != coefs.size())
        throw SizeError();
    for (unsigned long a = 0; a < coefs.size(); a++)
        temp[a].scl(coefs[a]);
    for (unsigned long a = 1; a < vector_lst.size(); a++)
        temp[0].add(temp[a]);
    return (temp[0]);
}