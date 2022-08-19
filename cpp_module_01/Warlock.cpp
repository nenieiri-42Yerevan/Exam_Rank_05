/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:12:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/19 14:36:12 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock()
{
}

Warlock::Warlock(const std::string name, const std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &other)
{
	this->name = other.name;
	this->title = other.title;
}

Warlock	&Warlock::operator=(const Warlock &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->title = other.title;
	}
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string	Warlock::getName(void) const
{
	return (this->name);
}

const std::string	Warlock::getTitle(void) const
{
	return (this->title);
}

void	Warlock::setTitle(const std::string title)
{
	this->title = title;
}

void	Warlock::introduce() const
{
	std::cout << this->name << ": I am ";
	std::cout << this->name << ", ";
	std::cout << this->title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	for (size_t i = 0; i < this->spells.size(); ++i)
		if (this->spells[i]->getName() == spell->getName())
			return ;
	this->spells.push_back(spell->clone());
}

void	Warlock::forgetSpell(const std::string &name)
{
	std::vector<ASpell *>::iterator it;
	for (it = this->spells.begin(); it != this->spells.end(); ++it)
	{
		if ((*it)->getName() == name)
		{
			delete *it;
			this->spells.erase(it);
			return ;
		}
	}
}

void	Warlock::launchSpell(const std::string &name, const ATarget &target)
{
	for (size_t i = 0; i < this->spells.size(); ++i)
	{
		if (this->spells[i]->getName() == name)
		{
			this->spells[i]->launch(target);
			return ;
		}
	}
}
