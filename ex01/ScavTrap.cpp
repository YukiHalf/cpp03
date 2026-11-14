#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	m_hit_points = 100;
	m_energy_points = 50;
	m_attack_damage = 20;
	std::cout << "ScavTrap " << m_name << " came to mars" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << m_name << " left mars" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
if(this->m_energy_points <= 0 || this->m_hit_points <= 0)
		return;
	--this->m_energy_points;

	std::cout << "ScavTrap " << this->m_name << " attacks " << target << " causing "<< this->m_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	if(this->m_energy_points <= 0 || this->m_hit_points <= 0)
		return;
	std::cout << "ScavTrap " <<  this->m_name << " is now in Gate keeper mode." << std::endl;
}

