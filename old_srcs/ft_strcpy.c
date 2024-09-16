/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:15:16 by jihoolee          #+#    #+#             */
/*   Updated: 2024/09/16 21:37:16 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strcpy(char *dst, const char *src)
{
	unsigned int	idx = 0;

	while (src[idx])
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return dst;
}
