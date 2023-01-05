#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string tmp_word="";
    std::vector<string>v;
    getline(cin,str);
    for(auto x : str)
    {
        if(x==' ')
        {
            v.push_back(tmp_word);
            tmp_word="";
        }
        else
        {
            //tmp_word=tmp_word+x;
            tmp_word.push_back(x);
        }
    }
    v.push_back(tmp_word);

    for(auto it=v.begin(); it!=v.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}
