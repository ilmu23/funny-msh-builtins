/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:12:32 by ivalimak          #+#    #+#             */
/*   Updated: 2024/01/08 00:22:29 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funny.h"

static char	*getmsg(void);
static char	*ft_chrtostr(char c, size_t n);
static void	ft_putbubble(char *msg);

void	ft_putcow(const char *msg)
{
	if (!msg)
		msg = getmsg();
	if (!msg)
		return ;
	ft_putbubble(ft_push((char *)msg));
	ft_printf("%s%s%s%s%s", COW1, COW2, COW3, COW4, COW5);
}

static char	*getmsg(void)
{
	char	*msg;
	char	*tmp;

	msg = ft_push(ft_strtrim(get_next_line(0), "\n"));
	while (msg)
	{
		tmp = ft_strtrim(get_next_line(0), "\n");
		if (!tmp)
			break ;
		msg = ft_push(ft_strsjoin(msg, tmp, ' '));
	}
	return (msg);
}

static char	*ft_chrtostr(char c, size_t n)
{
	size_t	i;
	char	*out;

	out = ft_calloc(n + 1, sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (i < n)
		out[i++] = c;
	return (out);
}

static int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

static void	ft_putbubble(char *msg)
{
	size_t		i;
	size_t		len;
	size_t		blen;
	const char	edge[4][2] = {"<>", "/\\", "||", "\\/"};

	i = 0;
	len = ft_strlen(msg);
	blen = ft_min(len, 42);
	ft_printf(" %s\n", ft_chrtostr('_', blen + 2));
	while (*msg)
	{
		if (len > 42 && i == 0)
			i++;
		else if (len > 42 && i == 1)
			i++;
		else if (len <= 42 && i != 0)
			i = 3;
		ft_printf("%c %-*.*s %c\n", edge[i][0], blen,
			ft_min(len, 42), msg, edge[i][1]);
		msg = msg + ft_min(len, blen);
		len = ft_strlen(msg);
	}
	ft_printf(" %s\n", ft_chrtostr('-', blen + 2));
}
