/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:42:58 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/19 11:44:46 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include "ATarget.hpp"

class	ATarget;

class	ASpell
{
	public:
		ASpell();
		ASpell(const std::string &name, const std::string &effects);
		ASpell(const ASpell &other);
		ASpell				&operator=(const ASpell &other);
		virtual				~ASpell();
	public:
		const std::string	&getName() const;
		const std::string	&getEffects() const;
		virtual ASpell		*clone() const = 0;
		void				launch(const ATarget &target) const;
	protected:
		std::string			name;
		std::string			effects;
};

#endif
