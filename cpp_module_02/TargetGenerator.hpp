/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:27:00 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/18 19:49:00 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <string>
# include <vector>
# include "ATarget.hpp"

class	TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();
	public:
		void					learnTargetType(ATarget *target);
		void					forgetTargetType(const std::string &type);
		ATarget					*createTarget(const std::string &type);
	private:
		TargetGenerator(const TargetGenerator &other);
		TargetGenerator			&operator=(const TargetGenerator &other);
	private:
		std::vector<ATarget *>	generator;
};

#endif
