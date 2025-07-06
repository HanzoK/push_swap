/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:43:52 by hanjkim           #+#    #+#             */
/*   Updated: 2024/08/28 16:06:42 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;
	size_t	str_len;

	i = 0;
	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
		len = 0;
	if (len > (str_len - start))
		len = str_len - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main()
{
	char *str = "i just want this part #############";
    size_t size = 20;
    char *ret = ft_substr(str, 5, size);

    if (!strncmp(ret, str + 5, size))
    {
        free(ret);
        printf("Success");
    }
    free(ret);
    printf(("Fail"));
}*/	
