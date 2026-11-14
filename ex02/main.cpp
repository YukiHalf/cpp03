#include "FlagTrap.hpp"

int main()
{
	const std::string name = "El manuel";
	FlagTrap one(name);

	one.attack("Francesco");

	one.takeDamage(99);
	one.beRepaired(10);
	one.highFivesGuys();

return 0;
}
