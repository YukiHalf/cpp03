#include "ScavTrap.hpp"

int main()
{
	const std::string name = "El manuel";
	ScavTrap one(name);

	one.attack("Francesco");
	one.takeDamage(99);
	one.beRepaired(10);
	one.guardGate();


return 0;
}
