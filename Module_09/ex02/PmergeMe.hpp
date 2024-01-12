#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <ctime>
class Pmergeme
{
    private:
    std::vector<std::vector<int> > arr;
    std::vector<int> vec;
    std::vector<int> temp;
    std::vector<std::vector<int> > main;
    std::vector<std::vector<int> > pend;
    std::vector<std::vector<int> >::iterator it;
    public:
    void rvrc(std::vector<int> rest, size_t range);
    Pmergeme(char **av);
    Pmergeme(const Pmergeme &copy);
    Pmergeme& operator=(const Pmergeme &op);
    ~Pmergeme();
    Pmergeme();
    std::vector<int>  make_pair(std::vector<int> rest, size_t range);
    std::vector<int>  get_vector();
    std::vector<std::vector<int> >::iterator my_lower_bound(std::vector<std::vector<int> >::iterator begin, std::vector<std::vector<int> >::iterator end, const std::vector<int>& b);
};

class Pmergemedeque
{
    private:
    std::deque<std::deque<int> > arr;
    std::deque<int> vec;
    std::deque<int> temp;
    std::deque<std::deque<int> > main;
    std::deque<std::deque<int> > pend;
    std::deque<std::deque<int> >::iterator it;
    public:
    Pmergemedeque(const Pmergemedeque &copy);
    Pmergemedeque& operator=(const Pmergemedeque &op);
    ~Pmergemedeque();
    Pmergemedeque();
    std::deque<int>  get_vector();
    Pmergemedeque(char **av);
    void rvrc(std::deque<int> rest, size_t range);
    std::deque<int>  make_pair(std::deque<int> rest, size_t range);
    std::deque<std::deque<int> >::iterator my_lower_bound(std::deque<std::deque<int> >::iterator begin, std::deque<std::deque<int> >::iterator end, const std::deque<int>& b);
};
#endif