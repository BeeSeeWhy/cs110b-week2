#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	int hours, minutes, seconds;
	
	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			for (seconds = 0; seconds < 60; seconds++)
			{
				cout.fill('0');
				cout << setw(2) << hours << ':';
				cout << setw(2) << minutes << ':';
				cout << setw(2) << seconds << endl;
			}
		}
	}

	return 0;
}
		
