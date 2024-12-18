#ifndef ALL_INCLUDE_HPP
# define ALL_INCLUDE_HPP

# include <string>
# include <iostream>
# include <array>
# include <iterator>
# include <vector>
# include <list>
# include "error.hpp"
# include "vector_struct.hpp"
# include "matrix_struct.hpp"

Vector  linear_combination(std::vector<Vector> vector_lst, std::vector<float> coefs);

#endif