#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    int start = 0;
    int next = 1;
    int end = n-1;
    int reqSum = 0;

    for (int i = start; i < n; i=start)
    {
        if(next<end){
            if(reqSum!=sum-arr[i]){
                reqSum=sum-arr[i];
            }
            if(arr[next]==reqSum){
                cout<<true<<" "<<"index start: "<<i<<" "<<"index end: "<<next;
                return 0;
            }
            if(arr[end]==reqSum){
                cout<<true<<" "<<"index start: "<<i<<" "<<"index end: "<<end;
                return 0;
            }else{
                next++;
                end--;
            }
        }else{
            next = i+1;
            end = n-1;
            start++;
        }
    }
    cout<<false;
    
    return 0;
}