/*
#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>


class Zombie{

	private:
		std::string name;
	public:
		void announce(void) const;
		Zombie(std::string name);
		~Zombie()
		{
			std::cout << name << " was destroyed" << std::endl;
		}
};

Zombie* newZombie(std::string name);

#endif
*/

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
	//	Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce();
		std::string	setName(std::string name);
};


Zombie*	zombieHorde(int N, std::string name);

#endif