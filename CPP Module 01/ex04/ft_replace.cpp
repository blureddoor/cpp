/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:59:03 by lvintila          #+#    #+#             */
/*   Updated: 2023/04/23 11:47:38 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_replace.hpp"

void    ft_replace(std::string &line,
	const std::string& s1, const std::string& s2)
{
	size_t	start_pos = 0;
	if (s1.empty())
		return;

	while ((start_pos = line.find(s1, start_pos)) != std::string::npos)
	{
		line = line.substr(0, start_pos) + s2 + line.substr(start_pos + s1.length());
		start_pos += s2.length();
	}
}