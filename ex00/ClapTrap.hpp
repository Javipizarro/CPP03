/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:33:09 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/14 23:23:21 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class	ClapTrap {

public:
	ClapTrap( void );
	ClapTrap( string name );
	ClapTrap( ClapTrap const & ct );
	~ClapTrap( void );

	void		attack(const string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	string		getName( void ) const;
	int			getHitpoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getAttackDamage( void ) const;

	ClapTrap&	operator=( const ClapTrap& ct );

private:
	string		_name;
	int			_hitpoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif