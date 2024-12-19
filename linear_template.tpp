/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_template.tpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:17:17 by dcandan           #+#    #+#             */
/*   Updated: 2024/12/19 16:44:58 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_include.hpp"

template<typename T>
T linear_interpolation(T u, T v, float t)
{
    if (typeid(u) != typeid(v))
        throw NotSameType();
    
    T result = (v - u) * t + u;

    return (result);
}