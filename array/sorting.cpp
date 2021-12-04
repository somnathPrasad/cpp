#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void display(int arr[],int n){
for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    display(arr,n);
}

void bubbleSort(int arr[],int n){
    for (int i = 0; i < n-2; i++)
    {
        for (int j = 0; j < n-(i+2); j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    display(arr,n); 
}

void insertionSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    display(arr,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    auto start = high_resolution_clock::now();
    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    insertionSort(arr,n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    cout<<"\n"<<duration.count()<<" milliseconds";
    
    return 0;
}