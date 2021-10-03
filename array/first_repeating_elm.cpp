#include <bits/stdc++.h>

using namespace std;

int findElm(int arr[], int n, int elm)
{
    int index = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == elm)
        {
            index = j;
            break;
        }
    }
    return index;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sort_arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sort_arr[i] = arr[i];
    }

    int no = sizeof(sort_arr) / sizeof(sort_arr[0]);
    sort(sort_arr, sort_arr + no);
    int min_index = n;
    for (int i = 0; i < n; i++)
    {
        if (sort_arr[i] == sort_arr[i + 1])
        {
            int index = findElm(arr, n, sort_arr[i]);
            if (min_index > index)
            {
                min_index = index;
            }
        }
    }
    cout << min_index;

    return 0;
}