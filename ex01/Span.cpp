#include "Span.hpp"


Span::Span() :_size(0)
{

}

Span::Span(unsigned int n) : _size(n)
{

}

Span::Span(const Span &obj)
{
    *this = obj;

}

Span::~Span()
{
    
}

Span& Span::operator=(const Span &obj)
{
    if(this != &obj)
    {
        _vec = obj._vec;
        _size = obj._size;
    }
    return *this;
}

void Span::addNumber(int el)
{
    if(_size <= _vec.size())
        throw std::out_of_range("Out of range");
    _vec.push_back(el);
}

int Span::shortestSpan()
{
    if(_size == 0 || _vec.size() == 0)
        throw std::runtime_error("Container is empty, cannot find the value");
    std::sort(_vec.begin(),_vec.end());
    std::vector<int>::iterator iter1 = _vec.begin();
    std::vector<int>::iterator iter2 = iter1 + 1;
    int shortest = *iter2- *iter1;
    for(;iter2 != _vec.end() - 1;iter1++,iter2++)
    {
        if(*iter2 - *iter1 < shortest)
            shortest = *iter2 - *iter1;
    }
    return shortest;
}

int Span::longestSpan()
{
    if(_size == 0 || _vec.size() == 0)
        throw std::runtime_error("Container is empty, cannot find the value");
    std::sort(_vec.begin(),_vec.end());
    int longest = *(_vec.end() - 1) - *(_vec.begin());
    return longest;
}