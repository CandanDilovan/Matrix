#include "vector_struct.hpp"
#include <string>

Vector::Vector(float *vect)
{
    if (vect)
        this->vect = vect;
}
Vector::~Vector()
{

}

Vector::Vector(const Vector & src)
{
    *this = src;
}
Vector & Vector::operator=(Vector const & rhs)
{
    if (this != &rhs)
        return (*this);
    return (*this);
}

int Vector::size()
{
    int a = 0;
    while (this->vect[a])
        a++;
    std::cout << a << std::endl;
    return (a);
}

std::string Vector::getVect()
{
    std::string vect;

    vect += "{";
    int b = this->size();
    for (int a = 0; a < b; a++)
    {
        vect += std::to_string(this->vect[a]);
        vect += ", ";
    }
    vect += "}";
    return (vect);
}