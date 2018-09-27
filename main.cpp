#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;
	Bear turtle_killer;
  Giraffe giraffe_;
  
	std::cout << turtle_friend.MakeSound() << std::endl;
	turtle_killer.Fight(turtle_friend);


	std::cout << turtle_friend.MakeSound() << std::endl;
	std::cout << giraffe_.MakeSound() << std::endl;
	giraffe_.Fight(turtle_friend);

	return 0;
}
