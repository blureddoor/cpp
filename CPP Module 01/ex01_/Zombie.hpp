#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private: 
		std::string	m_name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	set_name(std::string new_name);
		void	announce( void ) const;

};

Zombie* zombieHorde( int N, std::string name );

#endif