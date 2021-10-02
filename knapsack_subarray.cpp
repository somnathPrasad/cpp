#include <bits/stdc++.h>

using namespace std;

int find_sum(long int arr[], int start, int n,int s)
{
    int sum = 0;
    int index = 0;
    for (int j = start; j < n; j++)
    {
        sum = sum + arr[j];
        if(sum == s){
            index = j;
            break;
        }
        if (sum > s)
        {
            return 0;
        }
    }
    return index;
}

int main()
{
    int n;
    cin >> n;
    long int s;
    cin >> s;
    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long int sum = 0;
    int end_index = 0,start_index = 0;
    for (int i = 0; i < n; i++)
    {
        start_index = i;
        end_index = find_sum(arr,i,n,s);
        if(end_index!=0){
            break;
        }
    }
    cout<<start_index+1<<" "<<end_index+1;
    return 0;
}