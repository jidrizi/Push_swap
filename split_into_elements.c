/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_into_elements.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:44:42 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/30 17:49:29 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// +2 for space and null terminator
char	**split_elements(char *argv[])
{
	char	*result;
	char	*temp;
	int		x;

	x = 1;
	if (!argv[x])
		return (NULL);
	result = ft_strdup(argv[x]);
	if (!result)
		return (NULL);
	while (argv[x] != NULL)
	{
		temp = ft_calloc(ft_strlen(result) + ft_strlen(argv[x]) + 2, 1);
		if (!temp)
			return (free(result), NULL);
		ft_strlcpy(temp, result, ft_strlen(result) + 1);
		ft_strlcat(temp, " ", ft_strlen(temp) + 2);
		if (ft_strncmp(temp, argv[x], ft_strlen(result)) != 0)
			ft_strlcat(temp, argv[x], ft_strlen(temp) + ft_strlen(argv[x]) + 1);
		free(result);
		result = temp;
		x++;
	}
	return (ft_split(result, ' '));
}

int	get_new_argc(char **element_array)
{
	int		new_argc;

	new_argc = 0;
	if (element_array == NULL)
		return (0);
	while (element_array[new_argc] != NULL)
		new_argc++;
	return (new_argc);
}
