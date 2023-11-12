/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:00:55 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/12 14:08:01 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>

int	main(void)
{
	assert(ft_isalnum('c') == 1);
	assert(ft_isalnum('!') == 0);
	return (1);
}
