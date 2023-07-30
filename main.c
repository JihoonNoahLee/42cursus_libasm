/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:06:39 by jihoolee          #+#    #+#             */
/*   Updated: 2023/07/30 20:49:04 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern size_t	_ft_strlen(const char *s);
extern int		_ft_strcmp(const char *s1, const char *s2);

void	test_strlen(void)
{
	char	*msg;

	msg = "Hello World!\n";
	write(STDOUT_FILENO, msg, _ft_strlen(msg));
}

void	test_strcmp(void)
{
	char	*s1;
	char	*s2;
	char	*msg;

	s1 = "abc";
	s2 = "ab";
	if (_ft_strcmp(s1, s2))
		msg = "diff!\n";
	else
		msg = "same!\n";
	write(STDOUT_FILENO, msg, _ft_strlen(msg));
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	test_strlen();
	test_strcmp();
	return (0);
}
