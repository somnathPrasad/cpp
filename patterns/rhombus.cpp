#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int spaces = 4;
    for (int i = 1; i <= n; i++)
    {
        // to print spaces
        for (int k = 1; k <= spaces; k++)
        {
            cout<<" ";
        }
        // to print actual stars
        for (int j = 1; j <= n; j++)
        {
            cout<<"*"<<" ";
        }
        spaces--;
        cout<<"\n";
    }
    
    return 0;
}