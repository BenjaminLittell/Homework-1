#include <iostream>

int main() {
	int entry;
	std::cout<<"Enter a positive integer just below:\n";
	std::cin >> entry;
	if (entry<=0) {
	std::cout<<"The number "<<entry<<" is not a positive number.";
return 0;
}
	int count=1;
	std::cout<<"\n The divisors of " <<entry<< " are:"; 
	while (count<entry){
	if ((entry%count==0)&&(count!=entry))
{
		std::cout<<" " <<count<<",";
	
		
}
count=count+1;
}
std::cout<<" and "<<entry<<".";
return 0;
}
