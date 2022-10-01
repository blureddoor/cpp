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