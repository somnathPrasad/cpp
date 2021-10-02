#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){cin>>arr[i];}


    int no = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + no);

    bool isFirstPositive = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=0 && !isFirstPositive)
        {
            if(arr[i-1]+1 != arr[i]){
                cout<<arr[i-1]+1;
                break;
            }
        }else if(arr[i]>=0 && isFirstPositive){
            if(arr[i]!=0){
                cout<<0;
                break;
            }
            isFirstPositive = 0;
        }
        
    }
    
    
    

    return 0;
}