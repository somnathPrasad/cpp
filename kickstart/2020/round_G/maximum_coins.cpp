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
        long long int a[n][n];
        for (long int i = 0; i < n; i++)
        {
            for (long int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            }
        }

        long long int currency_max = 0;
        for (long int i = 0; i < n; i++)
        {
            for (long int j = 0; j < n; j++)
            {
                long long int count = 0;
                long int start_i = i;
                long int start_j = j;
                while(start_i<n && start_j<n){
                    count+=a[start_i][start_j];
                    start_i++;
                    start_j++;
                }
                currency_max = max(count,currency_max);
            }
        }
        cout << "Case #"<<testcase<<": "<<currency_max<<endl;
    }

    return 0;
}