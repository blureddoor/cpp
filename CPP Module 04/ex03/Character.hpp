#ifndef CHARACTER_HPP
# define CHARACTER_HPP


# include "Icharacter.hpp"

class Character : public ICharacter
{
	private:


		Character();
		static const int	m_inventory_size = 4;

		std::string			m_name;
		AMateria			*m_inventory[Character::m_inventory_size];
		int					m_number_equipped;

	public:

		Character( const std::string & name);
		Character( const Character & src );
		~Character();

		Character 					& operator=(const Character & rhs );

        virtual std::string const   & getName() const;
        virtual void                equip(AMateria* m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter & target);
        virtual void				printInventory( void ) const; 


};

// std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */