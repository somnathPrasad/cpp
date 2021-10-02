#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int spaces = (n*2)-2;
    for (int i = 1; i <= n; i++)
    {
        // for printing spaces
        for (int s = 1; s <= spaces; s++)
        {
            cout<<" ";
        }
        // for printing left side of pattern
        for (int j = i; j >= 2; j--)
        {
            cout<<j<<" ";
        }
    
        cout<<1<<" ";

        // for printing right side of pattern
        for (int k = 2; k <= i; k++)
        {
            cout<<k<<" ";
        }
        spaces-=2;
        cout<<"\n";
    }
    
    return 0;
}