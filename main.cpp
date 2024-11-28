/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:00:07 by dcandan           #+#    #+#             */
/*   Updated: 2024/11/28 15:36:11 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_struct.hpp"
#include "iostream"

int main()
{
    float yes[] = {15.0, 2.3123, 4.0, 5.5, 12.1230, 1651.0, 21651.0};
    
    Vector oui(yes, sizeof(yes));
    std::cout << "size: " << oui.size() << std::endl;
    oui.display();
    return (0);
}