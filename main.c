/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:06:39 by jihoolee          #+#    #+#             */
/*   Updated: 2023/07/09 18:52:22 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern size_t	_ft_strlen(const char* s);

int	main(void)
{
	char	*msg;

	msg = "Hello World!\n";
	write(STDOUT_FILENO, msg, _ft_strlen(msg));
	return (0);
}
