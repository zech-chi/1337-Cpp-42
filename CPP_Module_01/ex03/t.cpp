#include <iostream>
#include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon(const std::string& t) : type(t) {}

	const std::string& getType() const {
		return type;
	}

	void setType(const std::string& newType) {
		type = newType;
	}
};

class HumanA {
private:
	std::string name;
	Weapon& weapon;

public:
	HumanA(const std::string& n, Weapon& w) : name(n), weapon(w) {}

	void attack() const {
		std::cout << name << " attacks with their " << weapon.getType() << std::endl;
	}
};

class HumanB {
private:
	std::string name;
	Weapon* weapon;

public:
	HumanB(const std::string& n) : name(n), weapon(nullptr) {}

	void setWeapon(Weapon& w) {
		weapon = &w;
	}

	void attack() const {
		if (weapon) {
			std::cout << name << " attacks with their " << weapon->getType() << std::endl;
		} else {
			std::cout << name << " has no weapon to attack with!" << std::endl;
		}
	}
};

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
