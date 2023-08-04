#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cntA = 0, cntO = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a')cntA++;
        else cntO++;
    }

    if(cntA > (s.size() /2 ))cout << s.size()<<endl;

    else{
            
            cout << cntA + (cntA - 1)<<endl;

    }
}