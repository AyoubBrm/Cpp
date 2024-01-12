#include "PmergeMe.hpp"

Pmergemedeque::Pmergemedeque(char **av)
{
    for(int i = 1; av[i];i ++)
    {
        vec.push_back(std::atoi(av[i]));
    }
}

std::deque<int>  Pmergemedeque::get_vector()
{
    return (this->vec);
}

Pmergemedeque::Pmergemedeque(const Pmergemedeque &copy)
{
    if (this != &copy)
        *this = copy;
}

Pmergemedeque& Pmergemedeque::operator=(const Pmergemedeque &op)
{
   this->vec = op.vec;
   this->it = op.it;
   this->main = op.main;
   this->pend = op.pend;
   this->temp = op.temp;
   return (*this);
}

Pmergemedeque::~Pmergemedeque()
{}

Pmergemedeque::Pmergemedeque()
{}

std::deque<std::deque<int> >::iterator Pmergemedeque::my_lower_bound(std::deque<std::deque<int> >::iterator begin, std::deque<std::deque<int> >::iterator end, const std::deque<int>& b)
{
    for (; begin != end; begin++)
    {
        if ((*begin)[(*begin).size() - 1] >= b[b.size() - 1])
        {
            return begin;
        }
    }
    return begin ;
}

std::deque<int> Pmergemedeque::make_pair(std::deque<int> rest, size_t range)
{
    size_t i = 0;
    if (arr.size() == 1)
       return (rest);
    rest.clear();
    main.clear();
    arr.clear();
    while (i < vec.size())
    {
        for (size_t j = 0; j < range; j++)
        {
            if (i < vec.size())
            {
                temp.push_back(vec[i]);
                i++;
            }
        }
        arr.push_back(temp);
        temp.clear();
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i].size() != range)
        {
            rest = arr[i];
            arr.erase(arr.begin() + i);
        }
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        if ((i + 1) % 2 == 0 && arr[i - 1][arr[i - 1].size() - 1] > arr[i][arr[i].size() - 1])
            std::swap(arr[i - 1], arr[i]);
    }
    vec.clear();
    for (size_t i = 0; i < arr.size(); i++)
    {    
         for (size_t j = 0 ; j < arr[i].size(); j++)
           vec.push_back(arr[i][j]);
    }
    range *= 2;
    make_pair(rest ,range);
    rvrc(rest, range);
    return (vec);
}

void Pmergemedeque::rvrc(std::deque<int> rest, size_t range)
{
    arr.clear();
    range /= 2;
    for(size_t i = 0; i < vec.size(); i++)
    {
        temp.push_back(vec[i]);
        if ((i + 1) % range == 0)
        {
            arr.push_back(temp);
            temp.clear();
        }
    }
    for (size_t i = 0; i < arr.size(); i++)
    {    
        if (i == 0)
            main.push_back(arr[i]);
        else if (i % 2 == 1) {
            main.push_back(arr[i]);
        }
        else
            pend.push_back(arr[i]);
    }
    if (!rest.empty())
    {
        pend.push_back(rest);
        rest.clear();
    }
    if (!pend.empty())
    {
        for (size_t i = 0; i < pend.size() ;i++)
        {
            if (i > pend.size() - 1)
                i = pend.size() - 1;
            if (!pend[i].empty() && pend[i].size() == range)
            {   
                it = my_lower_bound(main.begin(), main.end(), pend[i]);
                main.insert(it, pend[i]);
                pend[i].clear();
            }
        } 
    }
    vec.clear();
    for (size_t i = 0; i < main.size(); i++)
    {    
        for (size_t j = 0 ; j < main[i].size(); j ++)
           vec.push_back(main[i][j]);
    }
    arr.clear();
    main.clear();
}

//// ********************* vector part ************** ///// 

std::vector<int>  Pmergeme::get_vector()
{
    return (this->vec);
}

Pmergeme::Pmergeme()
{}

Pmergeme::Pmergeme(char **av)
{
    for(int i = 1; av[i];i ++)
    {
        vec.push_back(std::atoi(av[i]));
    }
}

Pmergeme::Pmergeme(const Pmergeme &copy)
{
    if (this != &copy)
        *this = copy;
}

Pmergeme& Pmergeme::operator=(const Pmergeme &op)
{
   this->vec = op.vec;
   this->it = op.it;
   this->main = op.main;
   this->pend = op.pend;
   this->temp = op.temp;
   return (*this);
}

Pmergeme::~Pmergeme()
{}

std::vector<std::vector<int> >::iterator Pmergeme::my_lower_bound(std::vector<std::vector<int> >::iterator begin, std::vector<std::vector<int> >::iterator end, const std::vector<int>& b)
{
    for (; begin != end; begin++)
    {
        if ((*begin)[(*begin).size() - 1] >= b[b.size() - 1])
        {
            return begin;
        }
    }
    return begin ;
}

void Pmergeme::rvrc(std::vector<int> rest, size_t range)
{
    arr.clear();
    range /= 2;
    for(size_t i = 0; i < vec.size(); i++)
    {
        temp.push_back(vec[i]);
        if ((i + 1) % range == 0)
        {
            arr.push_back(temp);
            temp.clear();
        }
    }
    for (size_t i = 0; i < arr.size(); i++)
    {    
        if (i == 0)
            main.push_back(arr[i]);
        else if (i % 2 == 0) 
            main.push_back(arr[i]);
        else
            pend.push_back(arr[i]);
    }
    if (!rest.empty())
    {
        pend.push_back(rest);
        rest.clear();
    }
    if (!pend.empty())
    {
        for (size_t i = 0; i < pend.size() ;i++)
        {
            if (i > pend.size() - 1)
                i = pend.size() - 1;
            if (!pend[i].empty() && pend[i].size() == range)
            {   
                it = my_lower_bound(main.begin(), main.end(), pend[i]);
                main.insert(it, pend[i]);
                pend[i].clear();
            }
        } 
    }
    vec.clear();
    for (size_t i = 0; i < main.size(); i++)
    {    
        for (size_t j = 0 ; j < main[i].size(); j ++)
           vec.push_back(main[i][j]);
    }
    arr.clear();
    main.clear();
}

std::vector<int> Pmergeme::make_pair(std::vector<int> rest, size_t range)
{
    size_t i = 0;
    if (arr.size() == 1)
       return (rest);
    rest.clear();
    main.clear();
    arr.clear();
    while (i < vec.size())
    {
        for (size_t j = 0; j < range; j++)
        {
            if (i < vec.size())
            {
                temp.push_back(vec[i]);
                i++;
            }
        }
        arr.push_back(temp);
        temp.clear();
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i].size() != range)
        {
            rest = arr[i];
            arr.erase(arr.begin() + i);
        }
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        if ((i + 1) % 2 == 0 && arr[i - 1][arr[i - 1].size() - 1] > arr[i][arr[i].size() - 1])
            std::swap(arr[i - 1], arr[i]);
    }
    vec.clear();
    for (size_t i = 0; i < arr.size(); i++)
    {    
         for (size_t j = 0 ; j < arr[i].size(); j++)
           vec.push_back(arr[i][j]);
    }
    range *= 2;
    make_pair(rest ,range);
    rvrc(rest, range);
    return (vec);
}
