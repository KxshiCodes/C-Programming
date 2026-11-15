/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabiola <aabiola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:22:43 by aabiola           #+#    #+#             */
/*   Updated: 2026/11/11 16:36:47 by aabiola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function prototype
void	ft_putchar(char c);

// Function definitions
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
