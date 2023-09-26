/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:41:48 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/21 15:48:50 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

#include <stdio.h>
#include <ctype.h>
int main (void)
{
	char c;
	c = '8';
	printf("ft_isdigit: %d\n",ft_isdigit(c));
	printf("isdigit: %d\n",isdigit(c));
}
