/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:06:56 by ymarival          #+#    #+#             */
/*   Updated: 2023/10/07 12:06:56 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename V>

void swap(V &a, V &b)
{
    V tmp = a;
    a = b;
    b = tmp;
}

template <typename U>

const U &min(const U &x, const U &y)
{
    return (x <= y ? x : y);
}

template< typename T >

const T	&max(const T &x ,const T &y) 
{
	return (x >= y ? x : y);
}


