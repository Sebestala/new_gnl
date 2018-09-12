/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 19:03:59 by sgarcia           #+#    #+#             */
/*   Updated: 2018/06/14 19:56:19 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(int fd, char const *s)
{
	if (s)
	{
		ft_putstr_fd(fd, s);
		ft_putchar_fd(fd, '\n');
	}
}