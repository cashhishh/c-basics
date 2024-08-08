
#include <bits/stdc++.h>
using namespace std;
// Pass by value
// void doSomething(int num)
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// void changeChar(string s)
// {
//     s[0] = 'T';
//     cout << s << endl;
// }

// pass by ref
void doSomething(int &num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
void changeChar(string &s)
{
    s[0] = 'T';
    cout << s << endl;
}

int main()
{
    int num = 10;
    doSomething(num);
    cout << num << endl;

    string s = "Manay";
    changeChar(s);
    cout << s << endl;
    return 0;
}
