#include <iostream>
using namespace std;

int main()
{
	int count = 0; //Initializing counter to decide which output is applicable
	int num = 1; //Initializing variable to 1, this will increment at the end of one cycle in while loop

	while (num <= 20) //Counts from 1 to 20
	{
		if (num % 3 == 0)
			count += 1;
		if (num % 5 == 0)
			count += 2;
		if (num % 7 == 0)
			count += 5;

		cout << num << endl; //Prints the number

		if (count == 1)
			cout << "Fizz" << endl;
		if (count == 2)
			cout << "Buzz" << endl;
		if (count == 3)
			cout << "Fizz Buzz" << endl;
		if (count == 5) 
			cout << "Woof" << endl; //Decides which label the number will recieve
		num += 1; // Number is incremented
		count = 0;// Count is reset to 0
	}

}