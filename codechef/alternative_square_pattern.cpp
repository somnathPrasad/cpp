#include <iostream>

using namespace std;

int main(){

    int n, count = 0;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i%2==0)
            {
                count++;
            }
            cout<<count<<" ";
            if (i%2!=0)
            {
                count--;
            }
            
        }
        count+=5;
        cout<<"\n";
    }
    
    

    return 0;
}