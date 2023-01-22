/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:57:34 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/22 11:59:36 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_REPLACE
# define FT_REPLACE
# include <string>
# include <iostream>

void    ft_replace(std::string *line,
	std::string to_replace, std::string replace_whith);

#endif