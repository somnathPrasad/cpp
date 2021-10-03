// CHANGE A STRING TO UPPER OR LOWER CASE.

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // upper case
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i]-=32;
        }
    }
    cout<<s<<endl;
    
// lower case
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i]+=32;
        }
    }
    cout<<s<<endl;
    return 0;
}