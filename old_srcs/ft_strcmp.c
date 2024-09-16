/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:25:01 by jihoolee          #+#    #+#             */
/*   Updated: 2024/09/16 22:25:59 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(const char *s1, const char *s2)
{
	int idx;

	idx = 0;
	while (s1[idx] && s2[idx] && s1[idx] == s2[idx])
		idx++;
	return (s1[idx] - s2[idx]);
}
