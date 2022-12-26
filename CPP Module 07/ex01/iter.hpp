/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:58:44 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/26 11:12:08 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T *array, int arraySize, void (*funcExec)(const T &));

template<typename T>
void	display( T &whatever );

void	setRandomValue( int &number );

#endif