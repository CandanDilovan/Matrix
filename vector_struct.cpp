#include "vector_struct.hpp"

Vector::Vector(float *vect, int size)
{
    if (vect)
    {
        this->vect_size = size / sizeof(vect[0]);
        this->vect = new float[this->vect_size];
        for (int a = 0; a < this->vect_size; a++)
            this->vect[a] = vect[a];
    }
}
Vector::~Vector()
{
    delete [] this->vect;
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
    return (this->vect_size);
}

void Vector::display()
{
    std::string array;
    int vect_size = this->size();

    for (int a = 0; a < vect_size; a++)
    {
        std::string number = std::to_string(this->vect[a]);
        array += this->remove_zero(number);
        if (a + 1 != vect_size)
            array += ", ";
    }
    std::cout << "[" << array << "]" << std::endl;
}

float *Vector::getVect()
{
    return (this->vect);
}



std::string Vector::remove_zero(std::string number)
{
    while (number.find_last_of('0') == number.size() - 1 || number.back() == '.')
        number.pop_back();
    return (number);
}