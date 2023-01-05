#include<bits/stdc++.h>
#include <direct.h>
#include<fstream>
using namespace std;

int main()
{
    string s="./sadi/shuvra.csv";
    const char *a=s.c_str();
    char d[20]="./folder";
    char f[20]="asd.csv";

    int flag=0;
    fstream ip;
    ip.open(a,std::fstream::in | std::fstream::out | std::fstream::app | std::fstream::ate);
    if(ip.tellg() == 0)
    {
        ip << "Hi!!!!!!" << "\n";
        cout << "hollo....";
    }

    ip << " I am your bro" << "\n";
    ip.close();

    return 0;
}
