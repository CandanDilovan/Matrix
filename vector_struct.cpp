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
    {
        this->vect = rhs.vect;
        this->vect_size = rhs.vect_size;
    }
    return (*this);
}

int Vector::size()
{
    return (this->vect_size);
}

void Vector::display()
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

std::vector<float> Vector::getVect()
{
    return (this->vect);
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


void Vector::add(Vector &added)
{
    std::vector<float> added_vect;

    if (this->size() != added.size())
        throw SizeError();
    for (int a = 0; a < vect_size; a++)
        added_vect.push_back(this->vect[a] + added.vect[a]);
    this->vect = added_vect;
}

void Vector::sub(Vector &subbed)
{
    std::vector<float> subbed_vect;

    if (this->size() != subbed.size())
        throw SizeError();
    for (int a = 0; a < vect_size; a++)
        subbed_vect.push_back(this->vect[a] - subbed.vect[a]);
    this->vect = subbed_vect;
}

void Vector::scl(float multiplier)
{
    std::vector<float> scl_vect;

    for (int a = 0; a < this->vect_size; a++)
        scl_vect.push_back(this->vect[a] * multiplier);
    this->vect = scl_vect;
}
