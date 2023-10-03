/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:10:43 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/28 15:31:02 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = NULL;
	while (*s)
	{
		if (*s == (char) c)
			aux = (char *) s;
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (aux);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    printf("%s\n", strrchr("Gianella Rodríguez", 'G'));
    printf("----------------------------------\n");
    printf("%s\n", ft_strrchr("Gianella Rodríguez", 'G'));
    printf("----------------------------------\n");
    printf("%s\n", strrchr("Gianella Rodríguez", 'R'));
    printf("----------------------------------\n");
    printf("%s\n", ft_strrchr("Gianella Rodríguez", 'R'));
    printf("----------------------------------\n");
    printf("%s\n", strrchr("Gianella Rodríguez", 'z'));
    printf("----------------------------------\n");
    printf("%s\n", ft_strrchr("Gianella Rodríguez", 'z'));
    printf("----------------------------------\n");
    return 0;
}
*/
