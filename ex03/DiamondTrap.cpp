#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
FragTrap(name),ScavTrap(name),m_name(name)
{
	m_hit_points = 100;
	m_energy_points = 50;
	m_attack_damage = 30;
	std::cout << "DiamondTrap " << m_name << " constructed" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << m_name << " left space" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other),
FragTrap(other),ScavTrap(other),m_name(other.m_name)
{
	std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	m_name = other.m_name;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout <<"DiamondTrap name:" << m_name << "\nClapTrap name:" << ClapTrap::m_name << std::endl;
}


