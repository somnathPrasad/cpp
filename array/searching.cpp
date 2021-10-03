#include <iostream>

using namespace std;

int linearSearch(int arr[],int key,int len){
for(int i=0;i<len;i++){
        if(arr[i]==key){return i;}
    }
     return -1;
}

int binarySearch(int arr[],int key,int len){
    int start = 0;
    int end = len;
    while (start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,key,n);
    return 0;
}