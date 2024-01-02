/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funny.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:10:13 by ivalimak          #+#    #+#             */
/*   Updated: 2024/01/02 02:29:19 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funny.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putcow(NULL);
	else
		ft_putcow(argv[1]);
	ft_putchar_fd('\n', 1);
	ft_roulette();
	return (ft_return(0));
}
