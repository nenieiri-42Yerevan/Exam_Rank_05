/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:55:08 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/18 19:46:33 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <vector>
# include <string>
# include "ASpell.hpp"

class	SpellBook
{
	public:
		SpellBook();
		~SpellBook();
	public:
		void					learnSpell(ASpell *spell);
		void					forgetSpell(const std::string &name);
		ASpell					*createSpell(const std::string &name);
	private:
		SpellBook(const SpellBook &other);
		SpellBook				&operator=(const SpellBook &other);
	private:
		std::vector<ASpell *>	book;
};

#endif
