/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 22:23:42 by jihoolee          #+#    #+#             */
/*   Updated: 2026/09/16 22:36:55 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

static void	print_strlen_result(size_t index, size_t expected, size_t actual)
{
	if (expected == actual)
		printf("case %zu: expected=%zu, actual=%zu [PASS]\n",
			index, expected, actual);
	else
		printf("case %zu: expected=%zu, actual=%zu [FAIL]\n",
			index, expected, actual);
}

void	test_strlen(void)
{
	const char	*test_cases[] = {
		"",
		"a",
		"Hello World!",
		"   leading and trailing spaces   ",
		"1234567890123456789012345678901234567890"
	};
	size_t		case_count;
	size_t		index;
	size_t		expected;
	size_t		actual;

	case_count = sizeof(test_cases) / sizeof(test_cases[0]);
	index = 0;
	while (index < case_count)
	{
		expected = strlen(test_cases[index]);
		actual = ft_strlen(test_cases[index]);
		print_strlen_result(index + 1, expected, actual);
		index++;
	}
}
