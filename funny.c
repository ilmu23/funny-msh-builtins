/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funny.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:10:13 by ivalimak          #+#    #+#             */
/*   Updated: 2024/01/02 03:25:06 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funny.h"

int	main(int argc, char **argv)
{
	char	*msg;

	if (argc < 2)
		ft_putcow(NULL);
	else
	{
		argv++;
		msg = *argv;
		argv++;
		while (*argv)
			msg = ft_strsjoin(msg, *argv++, ' ');
		ft_putcow(ft_push(msg));
	}
	ft_putchar_fd('\n', 1);
	ft_roulette();
	return (ft_return(0));
}
