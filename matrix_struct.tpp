/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_struct.tpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:45:08 by dcandan           #+#    #+#             */
/*   Updated: 2025/01/07 15:55:11 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix_struct.hpp"

template<typename T>
Matrix<T>::Matrix(std::vector<std::vector<T>> matrix)
{
    this->matrix = matrix;
}

template<typename T>
Matrix<T>::~Matrix()
{
    
}

template<typename T>
Matrix<T>::Matrix(const Matrix<T> & src)
{
    *this = src;
}

template<typename T>
std::vector<std::vector<T>> Matrix<T>::getMatrix()
{
    return (this->matrix);
}

template<typename T>
int Matrix<T>::is_square()
{
    unsigned long tiananmen_square = matrix[0].size();
    
    for(typename std::vector<std::vector<T>>::iterator it = this->matrix.begin(); it < this->matrix.end(); it++)
    {
        if ((*it).size() != tiananmen_square)
            return (1);
    }
    return(0);
}

template<typename T>
std::vector<unsigned long> Matrix<T>::shape()
{
    if (this->is_square() == 0)
    {
        std::vector<unsigned long> shaped = {this->matrix.size(), this->matrix[0].size()};
        std::cout << "[" << shaped[0] << ", " << shaped[1] << "]" << std::endl;
        return (shaped);
    }
    unsigned long max = 0;
    for(typename std::vector<std::vector<T>>::iterator it = this->matrix.begin(); it < this->matrix.end(); it++)
    {
        if ((*it).size() > max)
            max = (*it).size();
    }
    std::vector<unsigned long> shaped = {this->matrix.size(), max};
    std::cout << "[" << shaped[0] << ", " << shaped[1] << "]" << std::endl;
    return (shaped);

}

template<typename T>
void    Matrix<T>::display()
{
    for (typename std::vector<std::vector<T>>::iterator it = this->matrix.begin(); it < this->matrix.end(); it++)
    {
        if (it == this->matrix.begin())
            std::cout << "[";
        for(typename std::vector<T>::iterator ite = (*it).begin(); ite < (*it).end(); ite++)
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

template<typename T>
Vector<T> Matrix<T>::reshape()
{
    std::vector<T> new_vect;
    
    for (typename std::vector<std::vector<T>>::iterator it = this->matrix.begin(); it < this->matrix.end(); it++)
    {
        for(typename std::vector<T>::iterator ite = (*it).begin(); ite < (*it).end(); ite++)
        {
            new_vect.push_back((*ite));
        }
    }
    return (Vector<T>(new_vect));
}

template<typename T>
void Matrix<T>::scl(float multiplier)
{

    for (unsigned long a = 0; a < this->matrix.size(); a++)
    {
        for (unsigned long b = 0; b < this->matrix[a].size(); b++)
            this->matrix[a][b] *= multiplier;
    }
}

template<typename T>
void Matrix<T>::sub(Matrix<T> &subbed)
{

    MatrixError(subbed);

    for (unsigned long a = 0; a < this->matrix.size(); a++)
    {
        for (unsigned long b = 0; b < this->matrix[a].size(); b++)
            this->matrix[a][b] -= subbed.matrix[a][b];
    }
}

template<typename T>
void Matrix<T>::add(Matrix<T> &added)
{

    MatrixError(added);

    for (unsigned long a = 0; a < this->matrix.size(); a++)
    {
        for (unsigned long b = 0; b < this->matrix[a].size(); b++)
            this->matrix[a][b] += added.matrix[a][b];
    }
}

template<typename T>
void Matrix<T>::MatrixError(Matrix<T> &check)
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

template<typename T>
Matrix<T> Matrix<T>::operator+(Matrix & rhs) const
{
    Matrix tmp(*this);
    tmp.add(rhs);
    return (tmp);
}

template<typename T>
Matrix<T> Matrix<T>::operator-(Matrix & rhs) const
{
    Matrix tmp(*this);
    tmp.sub(rhs);
    return (tmp);
}

template<typename T>
Matrix<T> Matrix<T>::operator*(float rhs) const
{
    Matrix tmp(*this);
    tmp.scl(rhs);
    return (tmp);
}

template<typename T>
Matrix<T> & Matrix<T>::operator=(Matrix<T> const & rhs)
{
    if (this != &rhs)
    {
        this->matrix = rhs.matrix;
    }
    return (*this);
}