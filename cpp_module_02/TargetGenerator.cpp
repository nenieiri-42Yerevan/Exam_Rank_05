/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:26:57 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/18 19:49:31 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::TargetGenerator(const TargetGenerator &other)
{
	(void)other;
}

TargetGenerator	&TargetGenerator::operator=(const TargetGenerator &other)
{
	if (this != &other)
	{
	}
	return (*this);
}

TargetGenerator::~TargetGenerator()
{
}

void	TargetGenerator::learnTargetType(ATarget *target)
{
	for (size_t i = 0; i < this->generator.size(); ++i)
		if (this->generator[i]->getType() == target->getType())
			return ;
	this->generator.push_back(target->clone());
}

void	TargetGenerator::forgetTargetType(const std::string &type)
{
	std::vector<ATarget *>::iterator it;
	for (it = this->generator.begin(); it != this->generator.end(); ++it)
	{
		if ((*it)->getType() == type)
		{
			delete *it;
			this->generator.erase(it);
			return ;
		}
	}
}

ATarget	*TargetGenerator::createTarget(const std::string &type)
{
	for (size_t i = 0; i < this->generator.size(); ++i)
		if (this->generator[i]->getType() == type)
			return (this->generator[i]);
	return (0);
}

