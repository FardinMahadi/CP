// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

unsigned long long fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}