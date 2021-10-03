#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();
    int count = 0;
    int maxcount = 0;
    int start_index=0,end_index=0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i]==' '){
            count=0;
        }else{
            count++;
        }
        if(count>maxcount){
            maxcount = count;
            
        }
    }
    
    cout<<maxcount;

    return 0;
}