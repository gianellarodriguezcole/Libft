/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:50:24 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/28 15:51:06 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*aux;

	aux = (char *) malloc(ft_strlen(s1) + 1);
	if (!aux)
		return (NULL);
	i = -1;
	while (s1[++i])
		aux[i] = s1[i];
	aux[i] = '\0';
	return (aux);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    printf ("%s\n", ft_strdup("Hola"));
    printf ("%s\n", ft_strdup("Holii a todos"));
    printf ("%s\n", ft_strdup(""));
    printf ("%s\n", strdup("Hola"));
    printf ("%s\n", strdup("Holii a todos"));
    printf ("%s\n", strdup(""));
    return (0);
}
*/
