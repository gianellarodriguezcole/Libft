/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:17:15 by giarodri          #+#    #+#             */
/*   Updated: 2023/10/03 13:17:35 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if ((char) c == '\0')
		return ((char *) s);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
   char *input;

   input = "teste";
   
   printf("%s\n", (char *)ft_strchr(input, 'e'));

   char *inputt = "teste";
   printf("%s\n", (char *)strchr(inputt, 'e'));


   
   return (0);
}*/
