/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roulette.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 02:12:41 by ivalimak          #+#    #+#             */
/*   Updated: 2024/03/16 10:13:20 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funny.h"

int	ft_roulette(void)
{
	uint8_t				c;
	int					fd;
	static const char	*segfault = NULL;

	fd = open("/dev/random", O_RDONLY);
	if (fd < 0)
		return (1);
	read(fd, &c, 1);
	close(fd);
	ft_printf("\e[35;1mYou put the barrel to your head");
	sleep(1);
	ft_printf(".");
	sleep(1);
	ft_printf(".");
	sleep(1);
	ft_printf(".");
	if (c <= 42)
	{
		ft_printf("\e[0m \e[31;1m*B\e[0m");
		ft_popall();
		ft_clean();
		c = *segfault;
	}
	ft_printf("\e[0m \e[34;1m*CLICK*\e[0m\n");
	return (0);
}
