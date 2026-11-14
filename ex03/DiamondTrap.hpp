#pragma once

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string m_name;
public:
	DiamondTrap(const std::string &name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);
	using ScavTrap::attack;
	void whoAmI();
};
