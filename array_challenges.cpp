#include <iostream>

using namespace std;

void maxTillI(int arr[], int n){
int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
        cout<<max<<" ";
    }
}
void sumOfSubarrays(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    maxTillI(arr,n);
    
    return 0;
}