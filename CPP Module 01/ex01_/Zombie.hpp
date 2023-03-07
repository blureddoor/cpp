#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private: 
		std::string	name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	setName(std::string new_name);
		void	announce( void ) const;

};

Zombie* zombieHorde( int N, std::string name );

#endif