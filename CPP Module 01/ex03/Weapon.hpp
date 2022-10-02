#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string	const & get_type() const;
		void	setType(std::string new_type);

	private:
		std::string	_type;
};

#endif