#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;
	Bear turtle_killer;

	std::cout << turtle_friend.MakeSound() << std::endl;
	turtle_killer.Fight(turtle_friend);

	return 0;
}