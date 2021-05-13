#include <bits/stdc++.h>
using namespace std;

int main()
{

    string l;

    cout << "Press y to open YOUTUBE => " << endl;
    cout << "Press i to open INSTAGRAM => " << endl;
    cout << "Press t to open TWITTER => " << endl;

    getline(cin, l);

    if (l == "y")
    {
        system("start https://www.youtube.com/ ");
    }
    else if (l == "i")
    {
        system("start https://www.instagram.com/");
    }
    else if (l == "t")
    {
        system("start https://www.instagram.com/");
    }
    else
    {
        system("invalid Entry!");
    }

    return 0;
}