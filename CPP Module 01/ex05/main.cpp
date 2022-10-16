/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:59:25 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/16 11:11:55 by lvintila         ###   ########.fr       */
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