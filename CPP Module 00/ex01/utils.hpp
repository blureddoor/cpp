/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:25:31 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/21 12:31:44 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

void    ft_trim_n(std::string &str, const char *chars = "\n");

std::string  cut_and_dot(std::string str, size_t max_len);

bool    its_only_digits(std::string str);

#endif
