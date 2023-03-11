/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:07:04 by skulkamt          #+#    #+#             */
/*   Updated: 2023/03/11 17:44:10 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int input, int fd)
{
	if (input == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (input < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-input, fd);
	}
	else if (input < 10)
		ft_putchar_fd(input + '0', fd);
	else
	{
		ft_putnbr_fd(input / 10, fd);
		ft_putnbr_fd(input % 10, fd);
	}
}
