/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:00:07 by dcandan           #+#    #+#             */
/*   Updated: 2024/12/11 12:55:17 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_struct.hpp"
#include "iostream"

int main()
{
    std::vector<float> yes = {15.0, 2.3123, 4.0, 5.5, 12.1230, 1651.0, 21651.0};
    
    Vector oui(yes);
    std::cout << "size: " << oui.size() << std::endl;
    oui.display();
    return (0);
}