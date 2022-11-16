/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:12:05 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/16 21:47:40 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"

class ICharacter : public AMateria
{
    private:
        std::string m_type;
    
    public:
        ICharacter(); // linea Leo
        ICharacter(ICharacter const & src); // Linea Leo
        virtual ICharacter & operator=(const ICharacter & ref); // Linea Leo
        
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter & target) = 0;
};

#endif