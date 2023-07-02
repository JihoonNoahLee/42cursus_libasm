/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:06:39 by jihoolee          #+#    #+#             */
/*   Updated: 2023/07/02 17:17:02 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
*/
extern size_t	_ft_strlen(const char* s);

int	main(void)
{
	char	*msg;

	msg = "Hello World!\n";
	write(STDOUT_FILENO, msg, _ft_strlen(msg));
	return (0);
}
