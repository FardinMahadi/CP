// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
}

int main()
{
    multiset<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    // auto it = s.find("abc");
    // if (it != s.end())
    // {
    //     s.erase(it);
    // }

    s.erase("abc");

    print(s);
}