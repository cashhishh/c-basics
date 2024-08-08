// if-else
#include <iostream>
using namespace std;
int main()
{
    // Porgram to take age as input and tells whether you are are adult or minor
    int age;
    cout << "Enter your age:";
    cin >> age;
    if (age >= 18)
    {

        cout << "You are adult";
    }
    else
    {
        cout << "You are minor";
    }
    return 0;
}