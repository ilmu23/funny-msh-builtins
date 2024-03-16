/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leak.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:08:14 by ivalimak          #+#    #+#             */
/*   Updated: 2024/03/16 10:16:09 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funny.h"

// fuck memory safety
int	ft_leak(size_t size)
{
	void	*parser;

	if (!size)
		return (1);
	parser = malloc(size);
	if (!parser)
		return (1);
	return (0);
}
