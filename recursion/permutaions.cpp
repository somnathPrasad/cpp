#include <iostream>
using namespace std;

void display(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void permutations(int arr[],int n,int itr){
  if(itr==n-1){
    display(arr,n);
    return;
  }
  for(int i=itr;i<n;i++){
    swap(arr[itr],arr[i]);
    permutations(arr, n, itr+1);
    swap(arr[itr],arr[i]);
  }
}

int main() {
  int arr[]={1,2,3};
  permutations(arr, 3, 0);
} 