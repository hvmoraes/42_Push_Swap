/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:30:27 by hcorrea-          #+#    #+#             */
/*   Updated: 2023/01/03 14:44:36 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdalign.h>
#include <stdlib.h>
#include "Libft/libft.h"

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct t_list
{
	long int	*content;
	struct t_list	*next;
}	

t_list	*new_stack(char *content);

#endif