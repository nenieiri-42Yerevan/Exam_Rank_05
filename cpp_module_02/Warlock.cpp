/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:12:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/19 14:11:58 by vismaily         ###   ########.fr       */
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
	(void)other;
}

Warlock	&Warlock::operator=(const Warlock &other)
{
	if (this != &other)
	{
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
	std::cout << this->name << ": I am " << this->name << ", ";
	std::cout << this->title << '!' << std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	this->book.learnSpell(spell);
}

void	Warlock::forgetSpell(const std::string &name)
{
	this->book.forgetSpell(name);
}

void	Warlock::launchSpell(const std::string &name, const ATarget &target)
{
	ASpell	*spell;
	spell = this->book.createSpell(name);
	if (spell)
		spell->launch(target);
}
