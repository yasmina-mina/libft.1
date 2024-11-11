/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:04:14 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/11 14:10:45 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;
    
    i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dest == NULL)
		return (0);
	else
		while (s[i])
		{
			dest[i] = s[i];
			i++;
		}
	dest[i] = '\0';
    return (dest);
}

/*int	main(void)
{
	printf("%s\n", ft_strdup("bonjour"));
    printf("%s\n", strdup("bonjour"));
}*/