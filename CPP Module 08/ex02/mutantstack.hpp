#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack<T>() {}
		MutantStack<T>( MutantStack<T> const & src) { *this = src; }
		~MutantStack<T>() {}

	//	bool		empty() { return m_mutantstack.empty(); }
	//	size_t		size() { return m_mutantstack.size(); }
	//	T			& top() { return m_mutantstack.front(); }
	//	void		push(T member) { m_mutantstack.push_front(member); }
	//	void		pop() { m_mutantstack.pop_front(); }

		MutantStack const &		operator=( MutantStack<T> const & rhs ) {*this = rhs; return *this; }

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator			begin() { return this->c.begin(); } // c is an instance of class template
		iterator			end() { return this->c.end(); }


	private:


};

#endif /* ***************************************************** MUTANTSTACK_H */