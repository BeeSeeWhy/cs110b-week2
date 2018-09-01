#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int max = 8;

int numOfSteps ()
{
    int steps;
    do
    {
        cout << "How many steps?: " << endl;
        cout << "1. 1 Step " << endl;
        cout << "2. 2 Steps " << endl;
        cout << "3. 3 Steps " << endl;
        cout << "4. 4 Steps " << endl;
        cout << "5. 5 Steps " << endl;
        cout << "6. 6 Steps " << endl;
        cout << "7. 7 Steps " << endl;
        cout << "8. Exit " << endl;
        cin >> steps;
        
        if (steps == max)
        {
            break;
        }
        
    } while (steps < 1 || steps > max);
    
    return steps;
}

int main ()
{
    
    int steps = numOfSteps();
    if (steps == max)
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
