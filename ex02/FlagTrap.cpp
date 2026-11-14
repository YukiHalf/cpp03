#include "FlagTrap.hpp"

FlagTrap::FlagTrap(const std::string& name) : ClapTrap(name)
{
	m_hit_points = 100;
	m_energy_points = 100;
	m_attack_damage = 30;
	std::cout << "FlagTrap " << m_name << " came to space" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap " << m_name << " left space" << std::endl;
}


FlagTrap::FlagTrap(const FlagTrap& other) : ClapTrap(other)
{
	std::cout << "Copy constructor called" << std::endl;
}

FlagTrap& FlagTrap::operator=(const FlagTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return *this;
}

void FlagTrap::highFivesGuys()
{
	std::cout << "Can i get a high five m8?" << std::endl;
}


