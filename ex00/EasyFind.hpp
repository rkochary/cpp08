#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <exception>
#include <stdexcept>

template <typename T>

typename T::iterator easyfind(T &cont,int val)
{
    typename T::iterator iter = std::find(cont.begin(), cont.end(), val);
        if(iter == cont.end())
            throw std::runtime_error("nothing finded");
     std::cout << val << std::endl;
     return iter;
}


#endif