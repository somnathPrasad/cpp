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
        long int n;
        cin>>n;
        long long int arr[n],count=0;
        for (long int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        long long int prevmax=-1;
        for (long int i = 0; i < n; i++)
        {
            if (arr[i]>prevmax)
            {
                prevmax=arr[i];
                if (i==n-1)
                {
                    count++;
                }
                else if(arr[i]>arr[i+1])
                {
                    count++;
                }
                
            }
        }
        cout << "Case #"<<testcase<<": "<<count<<endl;
        count=0;
    }

    return 0;
}