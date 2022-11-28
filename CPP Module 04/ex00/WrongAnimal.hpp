/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:50:31 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 13:08:38 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const & src);
        ~WrongAnimal();
        
        WrongAnimal              & operator=(const WrongAnimal &ref);
        const std::string   & getType (void) const;
        void        makeSound() const;
};

std::ostream & operator<<( std::ostream &o, const WrongAnimal &instance );
#endif