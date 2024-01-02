/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roulette.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 02:12:41 by ivalimak          #+#    #+#             */
/*   Updated: 2024/01/02 02:39:55 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funny.h"

void	ft_roulette(void)
{
	unsigned char	c;
	int				fd;
	char			*segfault;

	segfault = NULL;
	fd = open("/dev/random", O_RDONLY);
	if (fd < 0)
		return ;
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
		ft_printf("\e[0m \e[31;1m *B\e[0m");
		ft_popall();
		ft_clean();
		*segfault = c;
	}
	ft_printf("\e[0m \e[34;1m *CLICK*\e[0m\n");
}
