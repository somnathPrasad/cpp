#include <iostream>

using namespace std;


bool checkSorted(int array[],int n){
    if(n==1){
        return true;
    }
    int restArray = checkSorted(array+1,n-1);
    return(array[0]<array[1] && restArray);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<checkSorted(arr,n);
    return 0;
}