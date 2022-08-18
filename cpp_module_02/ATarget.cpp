/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:08:44 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/18 16:13:56 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget()
{
}

ATarget::ATarget(const ATarget &other)
{
	this->type = other.type;
}

ATarget::ATarget(const std::string &type)
{
	this->type = type;
}

ATarget	&ATarget::operator=(const ATarget &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

ATarget::~ATarget()
{
}

const std::string	&ATarget::getType() const
{
	return (this->type);
}

void	ATarget::getHitBySpell(const ASpell &obj) const
{
	std::cout << this->type << " has been " << obj.getEffects() << "!" << std::endl;
}
