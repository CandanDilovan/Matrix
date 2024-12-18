/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:52:06 by dcandan           #+#    #+#             */
/*   Updated: 2024/12/19 16:07:00 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_HPP
# define ERROR_HPP

#include "all_include.hpp"

class SizeError : public std::exception
{
    public : 
        virtual const char* what() const throw(){
            return ("Error: not the same size");
        }
};

class NotSameType : public std::exception
{
    public : 
        virtual const char* what() const throw(){
            return ("Error: Template have unmatching type");
        }
};


#endif