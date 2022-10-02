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

/*

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{

public:

	Zombie( std::string name );
	~Zombie( void );

	void		announce( void ) const;

	std::string	getName( void ) const;

private:

	void		prefix( void ) const;

	std::string name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif

 */