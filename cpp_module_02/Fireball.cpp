/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:43:16 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/18 17:57:29 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball()
{
	this->name = "Fireball";
	this->effects = "burnt to a crisp";
}

Fireball	*Fireball::clone() const
{
	return (new Fireball(*this));
}
