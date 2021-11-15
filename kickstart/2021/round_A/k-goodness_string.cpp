/*
--Problem--
Charles defines the goodness score of a string as the number of indices i such that Si≠SN−i+1 where 1≤i≤N/2 (1-indexed). For example, the string CABABC has a goodness score of 2 since S2≠S5 and S3≠S4.

Charles gave Ada a string S of length N, consisting of uppercase letters and asked her to convert it into a string with a goodness score of K. In one operation, Ada can change any character in the string to any uppercase letter. Could you help Ada find the minimum number of operations required to transform the given string into a string with goodness score equal to K?

Input
The first line of the input gives the number of test cases, T. T test cases follow.

The first line of each test case contains two integers N and K. The second line of each test case contains a string S of length N, consisting of uppercase letters.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum number of operations required to transform the given string S into a string with goodness score equal to K.

--INPUT--
2
5 1
ABCAA
4 2
ABAA


--OUTPUT--
Case #1: 0
Case #2: 1

*/

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
        int n,k; //n=length of string,k=given goodness score;
        cin>>n>>k;
        string s;
        cin>>s;
        int goodness_score = 0;
        for (int i = 0; i < n/2; i++)
        {
            if(s[i]!=s[(n-i)-1]){
                goodness_score++;
            }
        }
        if (goodness_score==k)
        {
            cout << "Case #"<<testcase<<": "<<"0"<<endl;
        }else if(goodness_score>k){
            cout << "Case #"<<testcase<<": "<<goodness_score-k<<endl;
        }else{
            cout << "Case #"<<testcase<<": "<<k-goodness_score<<endl;
        }
                
    }

    return 0;
}