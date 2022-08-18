/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:37:39 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/18 17:57:29 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
	this->name = "Fwoosh";
	this->effects = "Fwooshed";
}

Fwoosh	*Fwoosh::clone() const
{
	return (new Fwoosh(*this));
}
