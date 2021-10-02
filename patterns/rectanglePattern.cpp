#include <iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    // rectangle pattern
    for (int i = 0; i < row; i++)
    {
        for (int i = 0; i < col; i++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}