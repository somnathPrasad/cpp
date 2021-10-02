#include <iostream>

using namespace std;

int main(){
    // int n;
    // cin>>n;

    // int start = 3, increment = 4;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if ((i+j)%4==0 || i==2&&j%2==0)
            {
                cout<<"*"<<" ";
            }else{
                cout<<" "<<" ";
            }
            
        }
        cout<<"\n";
    }    
    return 0;
}