#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>

class Span
{
    private:
        unsigned int _size;
        std::vector<int> _vec;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        ~Span();
        void addNumber(int);
        int shortestSpan();
        int longestSpan();
        template <typename T> void addNumber(T begin , T end)
        {
            for (T tmp = begin; tmp != end; ++tmp)
            {
                _vec.push_back(*tmp);
            }   
        }
};

#endif