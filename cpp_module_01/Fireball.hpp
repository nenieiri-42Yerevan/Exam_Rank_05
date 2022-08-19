#ifndef FIREBALLH_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class	Fireball : public ASpell
{
	public:
		Fireball();
	public:
		virtual Fireball	*clone() const;
};

#endif
