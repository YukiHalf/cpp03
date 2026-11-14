#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : m_name(name), m_hit_points(10), m_energy_points(10), m_attack_damage(0)
{
	std::cout << "ClapTrap " << m_name << " came to earth" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : m_name(other.m_name),m_hit_points(other.m_hit_points),m_energy_points(other.m_energy_points),m_attack_damage(other.m_attack_damage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	m_name = other.m_name;
	m_attack_damage = other.m_attack_damage;
	m_energy_points = other.m_energy_points;
	m_hit_points = other.m_hit_points;
	return *this;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << m_name << " left earth" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->m_energy_points <= 0 || this->m_hit_points <= 0)
		return;
	--this->m_energy_points;

	std::cout << "ClapTrap " << this->m_name << " attacks " << target << " causing "<< this->m_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->m_energy_points <= 0 || this->m_hit_points <= 0)
		return;
	this->m_hit_points += amount;
	--this->m_energy_points;
	std::cout << "ClapTrap " << this->m_name << " repaired for " << amount << " points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->m_energy_points <= 0 || this->m_hit_points <= 0)
		return;
	this->m_hit_points -= amount;
	--this->m_energy_points;
	std::cout << "ClapTrap " << this->m_name << " took damage for " << amount << " points!" << std::endl;
}
