// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    // p = make_pair(2, "Hello");
    p = {2, "Hello"};
    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    swap(p_array[0], p_array[2]);

    cin >> p.first >> p.second;
}