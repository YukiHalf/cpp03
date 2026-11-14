#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string m_name;
	int m_hit_points;
	int m_energy_points;
	int m_attack_damage;
public:
	ClapTrap(const std::string& name);
	~ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
