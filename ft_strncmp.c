/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:40:09 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/28 15:40:18 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	wrapper_strncmp(const char *s1, const char *s2, size_t n, size_t i)
{
	if (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		return (wrapper_strncmp(s1, s2, n, i + 1));
	}
	if (i == n)
		return (0);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	return (wrapper_strncmp(s1, s2, n, 0));
}
/*
size_t i;

    i = 0;
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        i++;
    }
    if (i == n)
        return (0);
    return ((unsigned char) s1[i] - (unsigned char) s2[i]);
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%i\n", ft_strncmp("Giarodriguez", "Giarodriguez", 4));
    printf("%i\n", ft_strncmp("Giarodriguez", "Andreu Segui", 4));
    printf("%i\n", ft_strncmp("Andreu Segui", "Andreu Segui", 4));
    printf("%i\n", ft_strncmp("Andreu Segui", "Giarodriguez", 4));
    printf("%i\n", ft_strncmp("Aitana Robles", "Aitana Robles", 4));
    printf("%i\n", ft_strncmp("Aitana Robles", "Andreu Segui", 4));

    printf("%i\n", strncmp("Giarodriguez", "Giarodriguez", 4));
    printf("%i\n", strncmp("Giarodriguez", "Andreu Segui", 4));
    printf("%i\n", strncmp("Andreu Segui", "Andreu Segui", 4));
    printf("%i\n", strncmp("Andreu Segui", "Giarodriguez", 4));
    printf("%i\n", strncmp("Aitana Robles", "Aitana Robles", 4));
    printf("%i\n", strncmp("Aitana Robles", "Andreu Segui", 4));
    return 0;
}
*/
