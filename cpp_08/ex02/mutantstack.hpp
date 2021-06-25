#ifndef MUTANTSTACK_HPP
# define  MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>

template< typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack();
    virtual ~MutantStack();
    MutantStack(MutantStack const &src);

    MutantStack &operator=(MutantStack const &src);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin();
	iterator end();
};

#endif
