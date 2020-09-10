#include <iostream>
#include <ctime> // For time ()
#include <cstdlib> //For srand() and rand()

int main(void) {
	srand(time(0));
	int number = (rand() % 100)+1;
	std::cout <<"I've chosen a number from 1 to 100.";
	std::cout<<"Try to guess what it is.\n";

	int guess;
	bool success = false;
	int count =0;

	while ((!success) && (count<6)) {
	std::cin >> guess;
	count=count+1;
	if ((guess < number)&&(count<6)) {
	std::cout << "That's too low.Try again.\n";
	} else if ((guess > number)&&(count<6)) {
	std::cout << "That's too high. Try again. \n";
	} else {
	success= true;
}
}
	if (guess!=number) {
	std::cout <<number<< " was actually the number I chose. Sucks to suck...\n";
	return 0;
}
	else if (guess==number) {	
	std::cout <<"Well done!"; 
	std::cout << number<< " was the number I chose.\n";
	return 0;
}
}
