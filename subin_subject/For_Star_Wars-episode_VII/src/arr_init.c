/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myko <myko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 05:27:01 by myko              #+#    #+#             */
/*   Updated: 2023/01/14 05:27:01 by myko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "star_wars.h"

int	*arr_init(void)
{
	int	*num;

	num = (int *)malloc(sizeof(int) * 10);
	for (int i =0; i < 10; i++)
		num[i] = 0;
	return num;
}
