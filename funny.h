/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funny.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:07:40 by ivalimak          #+#    #+#             */
/*   Updated: 2024/01/02 02:16:13 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNNY_H
# define FUNNY_H
# include <fcntl.h>
# include "libft.h"

// putcow.c

# define COW1 "        \\   ^__^\n"
# define COW2 "         \\  (\e[1;31moo\e[m)\\_________\n"
# define COW3 "            (__)\\ \e[1;31mputchar\e[m )\\/\\\n"
# define COW4 "                ||------w |\n"
# define COW5 "                ||       ||\n"

void	ft_putcow(const char *msg);

// roulette.c
void	ft_roulette(void);

#endif
