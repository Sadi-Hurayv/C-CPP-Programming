#include<bits/stdc++.h>
using namespace std;

int main()
{
    /// Take multiple line as string in cp
    /// Input:
    ///     2
    ///     It is string 1
    ///     It is string 2
    int n;
    string s1, s2;

    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        getline(cin, s1);
        cout << s1 << "\n";
    }
    return 0;
}


