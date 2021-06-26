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
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator        		begin();
	const_iterator  		begin() const;
	iterator        		end();
	const_iterator			end() const;
	reverse_iterator		rbegin();
	const_reverse_iterator	rbegin() const;
	reverse_iterator		rend();
	const_reverse_iterator	rend() const;
};

#endif
