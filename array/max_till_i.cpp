#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max_till_i = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_till_i<arr[i])
        {
            max_till_i = arr[i];
        }
        cout<<max_till_i<<" ";
    }
    
    
    return 0;
}