/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:00:07 by dcandan           #+#    #+#             */
/*   Updated: 2024/11/27 14:36:56 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_struct.hpp"
#include "iostream"

int main()
{
    float yes[] = {1.0, 2.3, 4.0, 5.5};
    
    int a = 0;
    while (yes[a])
        a++;
    std::cout << a << std::endl;

    Vector oui(yes);
    std::cout << oui.getVect() << std::endl;
    return (0);
}