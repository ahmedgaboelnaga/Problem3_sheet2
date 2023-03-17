#include<iostream>

using namespace std;

int main()
{
	//Problem3:Write a conditional statement with three branches that sets s to 1 if x is positive,to –1 if x is negative, and to0 if x is zero.
	
	int s;
	cout << "Enter the number: ";
	cin >> s;

	if (s > 0)
	{
		s = 1;
		cout << s;
	}
	else if (s < 0)
	{
		s = -1;
		cout << s;
	}
	else
	{
		s = 0;
		cout << s;
	}

	return 0;
}