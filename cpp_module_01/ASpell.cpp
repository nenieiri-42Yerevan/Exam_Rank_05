/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:42:54 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/18 16:13:06 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell()
{
}

ASpell::ASpell(const ASpell &other)
{
	this->name = other.name;
	this->effects = other.effects;
}

ASpell::ASpell(const std::string &name, const std::string &effects)
{
	this->name = name;
	this->effects = effects;
}

ASpell	&ASpell::operator=(const ASpell &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->effects = other.effects;
	}
	return (*this);
}

ASpell::~ASpell()
{
}

const std::string	ASpell::getName() const
{
	return (this->name);
}

const std::string	ASpell::getEffects() const
{
	return (this->effects);
}

void	ASpell::launch(const ATarget &obj) const
{
	obj.getHitBySpell(*this);
}
