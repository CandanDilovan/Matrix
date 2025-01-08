#include "vector_struct.hpp"

template<typename T>
Vector<T>::Vector(std::vector<T> vect)
{
    if (!vect.empty())
    {
        this->vect_size = vect.size();
        for (int a = 0; a < this->vect_size; a++)
            this->vect.push_back(vect[a]);
    }
}
template<typename T>
Vector<T>::~Vector()
{

}
template<typename T>
Vector<T>::Vector(const Vector & src)
{
    *this = src;
}
template<typename T>
int Vector<T>::size() const
{
    return (this->vect_size);
}

template<typename T>
void Vector<T>::display()
{
    int vect_size = this->size();

    std::cout << "[";
    for (int a = 0; a < vect_size; a++)
    {
        std::cout << this->vect[a];
        if (a + 1 != vect_size)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

template<typename T>
std::vector<T> Vector<T>::getVect()
{
    return (this->vect);
}


template<typename T>
Matrix<T> Vector<T>::reshape(unsigned long width)
{
    std::vector<std::vector<T>> new_matrix;
    std::vector<T> mini_vect;

    for (typename std::vector<T>::iterator it = this->vect.begin(); it < this->vect.end(); it++)
    {
        mini_vect.push_back(*it);
        if (mini_vect.size() == width)
        {
            new_matrix.push_back(mini_vect);
            mini_vect.clear();
        }
    }
    if (mini_vect.size())
        new_matrix.push_back(mini_vect);

    return (Matrix<T>(new_matrix));
}


template<typename T>
void Vector<T>::add(Vector &added)
{
    std::vector<T> added_vect;

    if (this->size() != added.size())
        throw SizeError();
    for (int a = 0; a < vect_size; a++)
        added_vect.push_back(this->vect[a] + added.vect[a]);
    this->vect = added_vect;
}

template<typename T>
void Vector<T>::sub(Vector &subbed)
{
    std::vector<T> subbed_vect;

    if (this->size() != subbed.size())
        throw SizeError();
    for (int a = 0; a < vect_size; a++)
        subbed_vect.push_back(this->vect[a] - subbed.vect[a]);
    this->vect = subbed_vect;
}

template<typename T>
void Vector<T>::scl(float multiplier)
{
    std::vector<T> scl_vect;

    for (int a = 0; a < this->vect_size; a++)
        scl_vect.push_back(this->vect[a] * multiplier);
    this->vect = scl_vect;
}

template<typename T>
float   Vector<T>::dot(Vector &dotproduct)
{
    float result = 0;
    Vector multiplied((*this) * dotproduct);
    for (typename std::vector<T>::iterator it = multiplied.vect.begin(); it < multiplied.vect.end(); it++)
        result += (*it);
    return (result);
}

template<typename T>
float                   Vector<T>::norm_1()
{
    float norm = 0;
    
    for (typename std::vector<T>::iterator it = vect.begin(); it < vect.end(); it++)
        norm += std::abs(*it);
    return (norm);
}

template<typename T>
float                   Vector<T>::norm_inf()
{
    std::vector<T> temp = this->vect;
    float norm = 0;
    
    for (typename std::vector<T>::iterator it = temp.begin(); it < temp.end(); it++)
    {
        (*it) = std::abs(*it);
        norm = std::max(norm, (*it));
    }
    return (norm);
}

template<typename T>
float                   Vector<T>::norm()
{
    float norm = 0;
    
    for (typename std::vector<T>::iterator it = vect.begin(); it < vect.end(); it++)
        norm += pow((*it), 2);
    norm = sqrt(norm);
    return (norm);
}


//surcharge

template<typename T>
Vector<T> Vector<T>::operator*(Vector & rhs) const
{

    std::vector<T> added_vect;

    if (this->size() != rhs.size())
        throw SizeError();
    for (int a = 0; a < vect_size; a++)
        added_vect.push_back(this->vect[a] * rhs.vect[a]);
    Vector tmp(added_vect);
    return (tmp);
}

template<typename T>
Vector<T> Vector<T>::operator+(Vector & rhs) const
{
    Vector tmp(*this);
    tmp.add(rhs);
    return (tmp);
}

template<typename T>
Vector<T> Vector<T>::operator-(Vector & rhs) const
{
    Vector tmp(*this);
    tmp.sub(rhs);
    return (tmp);
}

template<typename T>
Vector<T> Vector<T>::operator*(float rhs) const
{
    Vector tmp(*this);
    tmp.scl(rhs);
    return (tmp);
}

template<typename T>
Vector<T> & Vector<T>::operator=(Vector const & rhs)
{
    if (this != &rhs)
    {
        this->vect = rhs.vect;
        this->vect_size = rhs.vect_size;
    }
    return (*this);
}
