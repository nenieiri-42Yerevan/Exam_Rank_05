/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:08:48 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/19 12:03:13 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>
# include "ASpell.hpp"

class	ASpell;

class	ATarget
{
	public:
		ATarget();
		ATarget(const std::string &type);
		ATarget(const ATarget &other);
		ATarget				&operator=(const ATarget &other);
		virtual				~ATarget();
	public:
		const std::string	&getType() const;
		virtual ATarget		*clone() const = 0;
		void				getHitBySpell(const ASpell &spell) const;
	private:
		std::string			type;
};

#endif
