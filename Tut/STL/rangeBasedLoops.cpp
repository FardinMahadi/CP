// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    for (int &value : v)
    {
        value++;
        // cout << value << " ";
    }
    cout << endl;

    for (int value : v)
    {
        // value++;
        cout << value << " ";
    }
    cout << endl;

    auto a = 1;
    cout << a << endl;
}