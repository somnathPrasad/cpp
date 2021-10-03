// Given a string s of latin characters, your task is to output the character which has
// maximum frequency.


#include <iostream>
#include <string>
#include <algorithm> //for sort() function

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    int count = 0;
    int maxcount = 0;
    char freq_char;
    char last = s[0];
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (last == s[i])
        {
            count++;
        }
        else if (last != s[i])
        {
            if (count > maxcount)
            {
                maxcount = count;
                freq_char = s[i-1];
                count = 1;
            }
            else
            {
                count = 1;
            }
        }
        last = s[i];
    }
    cout << freq_char << ": " << maxcount << endl;

    return 0;
}