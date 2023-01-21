/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:01:05 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/21 12:32:25 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <cstring>
#include <cctype>
#include <iostream>

/*
 * removes the characters (\n) at the end of str that are contained in
 * the chars string.
 */

void    ft_trim_n(std::string &str, const char *chars)
{
	long long i;

	if (str.length() == 0)
		return ;
	i = str.length() - 1;
	while (i >= 0 && strchr(chars, str[i]))
		str.erase(i--);
}

/*
 * cuts the passed string if its longer than max_len and
 * replaces the last character with a dot.
 */

std::string  cut_and_dot(std::string str, size_t max_len)
{
	if (str.length() <= max_len)
		return (str);
	else
		return (str.replace(max_len - 1, std::string::npos, "."));
}

/*
 * returns true if the passed string is only composed by
 * digits.
*/ 

bool    its_only_digits(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (str.length() > 0);
}