#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int spaces = n;
    for (int i = 1; i <= n; i++)
    {
        // for spaces
        for (int s = 1; s < spaces; s++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        spaces--;
        cout<<"\n";
        
    }
    
    return 0;
}