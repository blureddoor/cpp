#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>


class Zombie{

	private:
		std::string m_zombie; 

	public:
		void anounce(std::string zombie)
		{
			m_zombie = zombie;
			std::cout << "Yo soy " << zombie << std::endl;
		}
		Zombie()
		{
		}
		~Zombie()
		{
			std::cout << "zombie " << m_zombie << " destruido" << std::endl;
		}

};

#endif