#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) // for odd number
    {
        cout << 2 * k - 1 << endl;
    }
    else // for even number
    {
        k -= (n + 1) / 2;
        cout << 2 * k << endl;
    }

    return 0;
}
