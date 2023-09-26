/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:40:14 by giarodri          #+#    #+#             */
/*   Updated: 2023/09/26 14:44:16 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdio.h>
size_t ft_strlen(const char *str)
   {
    
 size_t len = 0;
 while (str[len] != '\0')
 { 
 len++;
}
 return (len);
  }
 int main ()
   {
     char str[]="Hola";
   
       printf("El longitud de vector str es: %zu\n", ft_strlen(str));
       printf("strlen: %zu\n", strlen(str));
   }
