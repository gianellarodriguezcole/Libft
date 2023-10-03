/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:46:04 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/28 15:46:41 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		while (str[i + j] == to_find[j] && str[i + j] && (i + j) < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
		j = 0;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char found[] = "xyxyza";
    char str[] = "xyxyzwxyxyzrxyxyzaaa";

    printf("%c\n", strnstr(str, found, 2));
    printf("%s\n", ft_strnstr(str, found, 2));
    return 0;
}
*/
