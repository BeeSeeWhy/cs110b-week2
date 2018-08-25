#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    while (num < 1 || num > 100)
    {
        cout << "Enter a number: " << endl;
        cin >> num;
    }

    return 0;


}
