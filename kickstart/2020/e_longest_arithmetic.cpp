#include <iostream>

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
        cin >> n;
        long long int arr[n];
        for (long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long int diff = 0, streak = 1, max_streak = 0;
        for (long int i = 0; i < n - 1; i++)
        {
            if (i == 0)
            {
                diff = arr[i] - arr[i + 1];
                streak++;
            }
            else
            {
                if (arr[i] - arr[i + 1] != diff)
                {
                    streak = 2;
                    diff = arr[i] - arr[i + 1];
                }
                else
                {
                    streak++;
                }
            }
            max_streak = max(max_streak,streak);
        }
        cout << "Case #"<<testcase<<": "<<max_streak<<endl;
    }

    return 0;
}