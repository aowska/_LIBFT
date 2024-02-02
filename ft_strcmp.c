/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awacowsk <awacowsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:51:27 by awacowsk          #+#    #+#             */
/*   Updated: 2023/05/14 19:53:37 by awacowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strcmp(const char *s1, const char *s2) 
{
    while (*s1 && *s1 == *s2)
	{ // Dopóki znaki są identyczne i nie doszliśmy do końca któregoś łańcucha
        s1++;
        s2++;
    }
    return (unsigned char)(*s1) - (unsigned char)(*s2); // Zwracamy różnicę znaków (różnicę kodów ASCII)
}