/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:12:02 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/18 14:48:17 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class	Warlock
{
	public:
		Warlock(const std::string name, const std::string title);
		~Warlock();
	public:
		const std::string	getName(void) const;
		const std::string	getTitle(void) const;
		void				setTitle(const std::string title);
		void				introduce() const;
	private:
		Warlock();
		Warlock(const Warlock &other);
		Warlock				&operator=(const Warlock &other);
	private:
		std::string			name;
		std::string			title;
};

#endif
