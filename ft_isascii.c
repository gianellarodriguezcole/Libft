/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:18:57 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/21 16:09:15 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
#include <stdio.h>
#include <ctype.h>

int main (void)
{
	int c;
	c = 126;

	printf("ft_isascci: %d\n",ft_isascii(c));
	printf("isascii: %d\n",isascii(c));
}
