/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:59:03 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/22 12:00:37 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_replace.hpp"

void    ft_replace(std::string *line,
	std::string to_replace, std::string replace_whith)
{
	size_t	start_pos;

	while ((start_pos = (*line).find(to_replace)) != std::string::npos)
	{
		(*line).erase(start_pos, to_replace.length());
		(*line).insert(start_pos, replace_whith);
	}
}