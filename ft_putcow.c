/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:12:32 by ivalimak          #+#    #+#             */
/*   Updated: 2024/01/02 02:09:46 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funny.h"

static char	**ft_splitn(const char *s, size_t n);
static char	*getmsg(void);
static char	*ft_chrtostr(char c, size_t n);
static void	ft_putbubble(char **msg);

void	ft_putcow(const char *msg)
{
	if (!msg)
		msg = getmsg();
	if (!msg)
		return ;
	ft_putbubble(ft_pusharr(ft_splitn(msg, 42)));
	ft_printf("%s%s%s%s%s", COW1, COW2, COW3, COW4, COW5);
}

static char	**ft_splitn(const char *s, size_t n)
{
	size_t	i;
	size_t	start;
	size_t	asize;
	char	**out;

	asize = ((ft_strlen(s) - 1) / n) + 2;
	out = ft_push(ft_calloc(asize, sizeof(char *)));
	if (!out)
		return (NULL);
	i = 0;
	start = 0;
	while (i < asize - 1)
	{
		out[i] = ft_push(ft_substr(s, start, n));
		if (!out[i++])
			return (NULL);
		start += n;
	}
	ft_popn(asize);
	out[i] = NULL;
	return (out);
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

static void	ft_putbubble(char **msg)
{
	size_t	i;
	size_t	len;
	char	*edge;

	i = 0;
	len = ft_strlen(msg[i]);
	ft_printf(" %s\n", ft_chrtostr('_', len + 2));
	while (msg[i])
	{
		if (!msg[i + 1] && i == 0)
			edge = ft_strdup("<>");
		else if (!msg[i + 1])
			edge = ft_strdup("\\/");
		else if (i == 0)
			edge = ft_strdup("/\\");
		else
			edge = ft_strdup("||");
		ft_printf("%c %-*s %c\n", edge[0], len, msg[i++], edge[1]);
	}
	ft_printf(" %s\n", ft_chrtostr('-', len + 2));
	ft_popn(i);
}
