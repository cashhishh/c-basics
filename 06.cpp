// Functions
// Void function
#include <bits/stdc++.h>
using namespace std;
// void greet(string name)
// {
//     cout << "Hey " << name;
// }

// int main()
// {
//     string name;
//     cout << "What's your name? : ";
//     cin >> name;
//     greet(name);
// }

// Return function
int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}
int main()
{
    int num1, num2;
    cout << "Enter num1 and num2 : ";
    cin >> num1 >> num2;
    int result = sum(num1, num2);
    cout << "sum: " << result;
    return 0;
}