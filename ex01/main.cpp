#include "ClapTrap.hpp"

int main()
{
	const std::string name = "El manuel";
	ClapTrap one(name);

	one.attack("Francesco");
	one.takeDamage(-15);
	one.beRepaired(10);


return 0;
}
