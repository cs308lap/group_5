#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    return 0;

	int x = 56;
	int y = 98;
	cout<<"\nThe gcd of 56 and 98 is "<< gcd(x, y);
    return 0;
}
