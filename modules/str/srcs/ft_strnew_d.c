/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:37:41 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/09 13:54:29 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"

char	*ft_strnew_d(char const *s, char c)
{
	return (ft_strsub(s, 0, ft_strlen_d(s, c)));
}
