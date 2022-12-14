#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class	Zombie
{
	private:
		std::string	m_name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

/* Return pointer to Zombie object allocated with "new"*/
Zombie* newZombie(std::string name);

/*Creates new Zombie created on the stack */
void	randomChump(std::string name);
#endif
