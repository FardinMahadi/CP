#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long a, b;
    char op;
    cin >> a >> op >> b;

    if (op == '+')
    {
        cout << a + b << endl;
    }
    else if (op == '-')
    {
        cout << a - b << endl;
    }
    else if (op == '*')
    {
        cout << a * b << endl;
    }
    else if (op == '/')
    {

        cout << a / b << endl;
    }

    return 0;
}
