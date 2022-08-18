/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:55:04 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/18 19:51:21 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::SpellBook(const SpellBook &other)
{
	(void)other;
}

SpellBook	&SpellBook::operator=(const SpellBook &other)
{
	if (this != &other)
	{
	}
	return (*this);
}

SpellBook::~SpellBook()
{
}

void	SpellBook::learnSpell(ASpell *spell)
{
	for (size_t i = 0; i < this->book.size(); ++i)
		if (this->book[i]->getName() == spell->getName())
			return ;
	this->book.push_back(spell->clone());
}

void	SpellBook::forgetSpell(const std::string &name)
{
	std::vector<ASpell *>::iterator it;
	for (it = this->book.begin(); it != this->book.end(); ++it)
	{
		if ((*it)->getName() == name)
		{
			delete *it;
			this->book.erase(it);
			return ;
		}
	}
}

ASpell	*SpellBook::createSpell(const std::string &name)
{
	for (size_t i = 0; i < this->book.size(); ++i)
		if (this->book[i]->getName() == name)
			return (this->book[i]);
	return (0);
}
