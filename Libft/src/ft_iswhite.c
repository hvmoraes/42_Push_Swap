/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:09:45 by hcorrea-          #+#    #+#             */
/*   Updated: 2023/06/30 10:10:31 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_iswhite(char c)
{
	if (c == '\n' || c == ' ' || c == '\f' || c == '\t' || c == '\v'
		|| c == '\r')
		return (1);
	return (0);
}