// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    cout << "v.begin() => " << *v.begin() << endl;
    cout << "v.end() => " << *v.end() << endl;

    int *x = &v[6];
    x++;
    *x = -50;

    cout << "v.rbegin() => " << *v.rbegin() << endl;
    cout << "v.rend() => " << *v.rend() << endl;

    return 0;
}