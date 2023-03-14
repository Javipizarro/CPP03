/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:38:30 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/14 23:31:28 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
_name("Default"),
_hitpoints(10),
_energyPoints(10),
_attackDamage(0) {
	static int	instance = 1;

	this->_name.append(std::to_string(instance++));
	cout << "ClapTrap " << this->_name <<  " created" << endl;
	return;
}

ClapTrap::ClapTrap( string name ) :
_name(name),
_hitpoints(10),
_energyPoints(10),
_attackDamage(0) {
	cout << "ClapTrap " << this->_name <<  " created" << endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & ct ) {
	*this = ct;
	cout << "Copy constructor for " << ct.getName() << " called" << endl;
	return;
}

ClapTrap::~ClapTrap( void ) {
	cout << "Destructor for " << this->_name << " called" << endl;
}

void	ClapTrap::attack(const string& target) {
	cout << "ClapTrap " << this->_name << " attacks " << target << " causing "
	<< this->_hitpoints << " points of damage" << endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	cout << "ClapTrap " << this->_name << " has taken " << amount
	<<	" points of damage." << endl;
	this->_hitpoints -= amount;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	cout << "ClapTrap " << this->_name << " has restored " << amount
	<< "points of damage" << endl;
	return;
}

string	ClapTrap::getName( void ) const {
	return (this->_name);
}

int		ClapTrap::getHitpoints( void ) const {
	return (this->_hitpoints);
}

int		ClapTrap::getEnergyPoints( void ) const {
	return (this->_energyPoints);
}

int		ClapTrap::getAttackDamage( void ) const {
	return (this->_attackDamage);
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& ct ) {
	this->_name = ct.getName();
	this->_hitpoints = ct.getHitpoints();
	this->_energyPoints = ct.getEnergyPoints();
	this->_attackDamage = ct.getAttackDamage();
	return *this;
}