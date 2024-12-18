/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_combination.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:45:59 by dcandan           #+#    #+#             */
/*   Updated: 2024/12/18 15:47:13 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_include.hpp"

Vector  linear_combination(std::vector<Vector> vector_lst, std::vector<float> coefs)
{
    std::vector<Vector> temp = vector_lst;

    if (vector_lst.size() != coefs.size())
        throw SizeError();
    for (unsigned long a = 0; a < coefs.size(); a++)
        temp[a].scl(coefs[a]);
    for (unsigned long a = 1; a < vector_lst.size(); a++)
        temp[0].add(temp[a]);
    return (temp[0]);
}