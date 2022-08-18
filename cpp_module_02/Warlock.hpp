/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:12:02 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/18 19:18:53 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class	Warlock
{
	public:
		Warlock(const std::string name, const std::string title);
		~Warlock();
	public:
		const std::string		getName(void) const;
		const std::string		getTitle(void) const;
		void					setTitle(const std::string title);
		void					introduce() const;
	public:
		void					learnSpell(ASpell *spell);
		void					forgetSpell(const std::string &name);
		void					launchSpell(const std::string &name, const ATarget &tagret);
	private:
		Warlock();
		Warlock(const Warlock &other);
		Warlock					&operator=(const Warlock &other);
	private:
		std::string				name;
		std::string				title;
	private:
		SpellBook				book;
};

#endif
