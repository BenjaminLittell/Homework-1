#include <iostream>
// This code is rather broken. I am unable to get the pyramid to print out in a symmetrical fashion\
and I am struggling initially to work with the c++ language. Really, I just need to alot myself more time to practice, so I apologize for this less than\ 
functional code. Ben
int main()
{
	int space;
	int height;
	int i=1;
	int k=0;
    std::cout <<"Enter the height: ";
    std::cin >> height;

    while(i <= height) {
	i=i+1;
	k=0;
	space=1;
        while(space<=(height-i)/2)
{ 	space=space+1;
        std::cout <<"   ";
        }

        while(k !=i-1)
        {
            std::cout << " * ";
            k=k+1;
        }
        std::cout<<"\n";
    }    
    return 0;
}

