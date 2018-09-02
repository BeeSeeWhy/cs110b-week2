#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int num = 8;  //sets globally highest number used for options steps list

int getNumOfSteps () //function ask number of steps to display or exit
{
    int steps;
    do
    {
        cout << "How many steps?:" << endl;
        cout << "1. 1 Step" << endl;
        cout << "2. 2 Steps" << endl;
        cout << "3. 3 Steps" << endl;
        cout << "4. 4 Steps" << endl;
        cout << "5. 5 Steps" << endl;
        cout << "6. 6 Steps" << endl;
        cout << "7. 7 Steps" << endl;
        cout << "8. Exit" << endl;
        cin >> steps;
        
        if (steps == num)
        {
            break;
        }
        
    } while (steps < 1 || steps > num); //tests for number in requested range, if not continues asking for number
    
    return steps;
}

int main ()
{
    
    int steps = getNumOfSteps(); //calls function and sets variable for return 
    if (steps == num) //if user chose exit, exits program
    {
        return 0;
    }
    else 
    {
      double ones = 1;
      for (int i = 1, space = steps + 1; i <= steps;i++, space++)
      {
        cout.fill(' ');
        cout << setw(space) << fixed << setprecision(0) << pow(ones,2.0) << endl;
        ones = (ones * 10) + 1;
      }
    }
        
        
    return 0;
}
