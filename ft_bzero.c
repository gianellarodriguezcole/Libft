/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:53:42 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/29 16:53:04 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *) s + i) = '\0';
		i++;
	}
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char w[200] = "holaaa te";
    ft_bzero(w, 10);
    printf("%s", w);
    printf("\n-------------------------\n");
    char v[200] = "holaaa te";
    bzero(v, 10);
    printf("%s", v);
    return 0;
}
*/
