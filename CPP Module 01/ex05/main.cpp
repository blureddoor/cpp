/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:59:25 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/08 13:28:52 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Karen.hpp"

int main(void)
{
	Karen k;

	k.complain("debug");
	k.complain("info");
	k.complain("warning");
	k.complain("error");
}