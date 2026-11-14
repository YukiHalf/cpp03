#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	m_hit_points = 100;
	m_energy_points = 100;
	m_attack_damage = 30;
	std::cout << "FragTrap " << m_name << " came to space" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << m_name << " left space" << std::endl;
}


FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Can i get a high five m8?" << std::endl;
}


