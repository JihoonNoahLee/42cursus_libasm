/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:06:39 by jihoolee          #+#    #+#             */
/*   Updated: 2024/09/16 21:52:27 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
/* extern int		ft_strcmp(const char *s1, const char *s2);
extern char		*ft_strcpy(char *dest, const char *src);
extern ssize_t	ft_write(int fd, const void *buf, size_t count);

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
	s2 = "abcd";
	if (ft_strcmp(s1, s2))
		msg = "diff!\n";
	else
		msg = "same!\n";
	write(STDOUT_FILENO, msg, ft_strlen(msg));
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

char	*strcpy(char *dest, const char *src)
{
	size_t	iter;

	iter = 0;
	while (src[iter])
	{
		dest[iter] = src[iter];
		iter++;
	}
	dest[iter] = src[iter];
	return (dest);
}

void	test_strcpy(void)
{
	char	dest[10];
	char	*src;
	int		iter;

	src = "Hello";
	iter = 0;
	while (iter < 10)
	{
		dest[iter] = '0';
		iter++;
	}
	ft_strcpy(dest, src);
	iter = 0;
	while (iter < 10)
	{
		write(STDOUT_FILENO, dest + iter, 1);
		write(STDOUT_FILENO, "\n", 1);
		iter++;
	}
}

int	main(void)
{
	// test_strlen();
	// test_strcmp();
	// test_strcpy();
	ft_write(STDOUT_FILENO, "Hello World!", 13);
	return (0);
} */

void	test_strcpy(void)
{
	char	dest[10];
	char	*src;
	int		iter;

	src = "Hello";
	iter = 0;
	while (iter < 10)
	{
		dest[iter] = '0';
		iter++;
	}
	ft_strcpy(dest, src);
	iter = 0;
	while (iter < 10)
	{
		write(STDOUT_FILENO, dest + iter, 1);
		write(STDOUT_FILENO, "\n", 1);
		iter++;
	}
}

void	test_strlen(void)
{
	char	*msg;

	msg = "Hello World!\n";
	write(STDOUT_FILENO, msg, ft_strlen(msg));
	printf("len(msg): %d\n", ft_strlen(msg));
}

int	main(void)
{
	test_strlen();
	return (0);
}
