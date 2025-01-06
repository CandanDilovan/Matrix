/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_struct.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:45:08 by dcandan           #+#    #+#             */
/*   Updated: 2025/01/06 14:56:53 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix_struct.hpp"

Matrix::Matrix(std::vector<std::vector<float>> matrix)
{
    this->matrix = matrix;
}

Matrix::~Matrix()
{
    
}
Matrix::Matrix(const Matrix & src)
{
    *this = src;
}


std::vector<std::vector<float>> Matrix::getMatrix()
{
    return (this->matrix);
}

int Matrix::is_square()
{
    unsigned long tiananmen_square = matrix[0].size();
    
    for(std::vector<std::vector<float>>::iterator it = this->matrix.begin(); it < this->matrix.end(); it++)
    {
        if ((*it).size() != tiananmen_square)
            return (1);
    }
    return(0);
}

std::vector<unsigned long> Matrix::shape()
{
    if (this->is_square() == 0)
    {
        std::vector<unsigned long> shaped = {this->matrix.size(), this->matrix[0].size()};
        std::cout << "[" << shaped[0] << ", " << shaped[1] << "]" << std::endl;
        return (shaped);
    }
    unsigned long max = 0;
    for(std::vector<std::vector<float>>::iterator it = this->matrix.begin(); it < this->matrix.end(); it++)
    {
        if ((*it).size() > max)
            max = (*it).size();
    }
    std::vector<unsigned long> shaped = {this->matrix.size(), max};
    std::cout << "[" << shaped[0] << ", " << shaped[1] << "]" << std::endl;
    return (shaped);

}

void    Matrix::display()
{
    for (std::vector<std::vector<float>>::iterator it = this->matrix.begin(); it < this->matrix.end(); it++)
    {
        if (it == this->matrix.begin())
            std::cout << "[";
        for(std::vector<float>::iterator ite = (*it).begin(); ite < (*it).end(); ite++)
        {
            if (ite == (*it).begin())
                std::cout << "[";
            std::cout << (*ite);
            if (ite + 1 != (*it).end())
                std::cout << ", ";
        }
        if (it + 1 != this->matrix.end())
            std::cout << "]" << std::endl;
    }
    std::cout << "]]" << std::endl;
}

Vector Matrix::reshape()
{
    std::vector<float> new_vect;
    
    for (std::vector<std::vector<float>>::iterator it = this->matrix.begin(); it < this->matrix.end(); it++)
    {
        for(std::vector<float>::iterator ite = (*it).begin(); ite < (*it).end(); ite++)
        {
            new_vect.push_back((*ite));
        }
    }
    return (Vector(new_vect));
}

void Matrix::scl(float multiplier)
{

    for (unsigned long a = 0; a < this->matrix.size(); a++)
    {
        for (unsigned long b = 0; b < this->matrix[a].size(); b++)
            this->matrix[a][b] *= multiplier;
    }
}

void Matrix::sub(Matrix &subbed)
{

    MatrixError(subbed);

    for (unsigned long a = 0; a < this->matrix.size(); a++)
    {
        for (unsigned long b = 0; b < this->matrix[a].size(); b++)
            this->matrix[a][b] -= subbed.matrix[a][b];
    }
}

void Matrix::add(Matrix &added)
{

    MatrixError(added);

    for (unsigned long a = 0; a < this->matrix.size(); a++)
    {
        for (unsigned long b = 0; b < this->matrix[a].size(); b++)
            this->matrix[a][b] += added.matrix[a][b];
    }
}

void Matrix::MatrixError(Matrix &check)
{
    if (this->matrix.size() != check.matrix.size())
        throw SizeError();
    for (unsigned long a = 0; a < this->matrix.size(); a++)
    {
        if (this->matrix[a].size() != check.matrix[a].size())
            throw SizeError();
    }
}

//surcharge

Matrix Matrix::operator+(Matrix & rhs) const
{
    Matrix tmp(*this);
    tmp.add(rhs);
    return (tmp);
}

Matrix Matrix::operator-(Matrix & rhs) const
{
    Matrix tmp(*this);
    tmp.sub(rhs);
    return (tmp);
}

Matrix Matrix::operator*(float rhs) const
{
    Matrix tmp(*this);
    tmp.scl(rhs);
    return (tmp);
}

Matrix & Matrix::operator=(Matrix const & rhs)
{
    if (this != &rhs)
    {
        this->matrix = rhs.matrix;
    }
    return (*this);
}