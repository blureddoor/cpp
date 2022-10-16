#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cctype>

class	Zombie
{
	private:
		std::string	m_name;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce();
		std::string	setName(std::string name);
};


Zombie*	zombieHorde(int N, std::string name);

#endif