/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:42:17 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/29 17:42:30 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <string.h>
#include <stdio.h>
void f(unsigned int i, char *w)
{
    printf("Index: %i\n", i);
    printf("Char dir: %p\n", w);
}

int main()
{
    char s[] = "ABCDIMELO";
    ft_striteri(s, &f);
    return 0;
}
*/
