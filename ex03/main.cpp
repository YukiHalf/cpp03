#include "DiamondTrap.hpp"

int main()
{
	const std::string name = "El manuel";
	DiamondTrap one(name);

	one.attack("Francesco");

	one.takeDamage(99);
	one.beRepaired(10);
	one.whoAmI();

return 0;
}
