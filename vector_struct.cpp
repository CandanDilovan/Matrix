#include "vector_struct.hpp"

Vector::Vector(std::vector<float> vect)
{
    if (!vect.empty())
    {
        this->vect_size = vect.size();
        for (int a = 0; a < this->vect_size; a++)
            this->vect.push_back(vect[a]);
    }
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

std::vector<float> Vector::getVect()
{
    return (this->vect);
}



std::string Vector::remove_zero(std::string number)
{
    while (number.find_last_of('0') == number.size() - 1 || number.back() == '.')
        number.pop_back();
    return (number);
}


Matrix Vector::reshape(unsigned long width)
{
    std::vector<std::vector<float>> new_matrix;
    std::vector<float> mini_vect;

    for (std::vector<float>::iterator it = this->vect.begin(); it < this->vect.end(); it++)
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

    return (Matrix(new_matrix));
}
