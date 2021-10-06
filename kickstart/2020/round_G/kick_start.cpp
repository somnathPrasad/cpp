#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    int testcase=0;
    cin >> t;
    while (t--)
    {
        testcase++;
        string s;
        cin>>s;
        long int s_len = s.length();
        long int kick_count = 0;
        long int start_count = 0;
        long int count=0;
        for (long int i = 0; i < s.length(); i++)
        {
            if(s[i]=='K' && s[i+1]=='I' && s[i+2]=='C' && s[i+3]=='K'){
                kick_count++;
                // i=i+3;
            }else if(s[i]=='S' && s[i+1]=='T' && s[i+2]=='A' && s[i+3]=='R' && s[i+4]=='T'){
                // i=i+4;
                count+=kick_count;
            }
        }
        cout << "Case #"<<testcase<<": "<<count<<endl;
    }

    return 0;
}