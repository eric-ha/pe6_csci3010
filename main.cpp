#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;
	Giraffe giraffe_;

	std::cout << turtle_friend.MakeSound() << std::endl;
	std::cout << giraffe_.MakeSound() << std::endl;

	giraffe_.Fight(turtle_friend);

	return 0;
}
