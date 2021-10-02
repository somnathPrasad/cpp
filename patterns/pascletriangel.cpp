#include <iostream>

using namespace std;

int factorial(int n){
    int factrial = 1;
    for (int i = 2; i <= n; i++)
    {
        factrial *= i;
    }
    return factrial;
}

int ncr(int n,int r){
    int ncr = 0;
    ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

// 1             0c0
// 1 1           1c0 1c1
// 1 2 1         2c0 2c1 2c3
// 1 3 3 1       3c0 3c1 3c2 3c3
// 1 4 6 4 1     4c0 4c1 4c2 4c3 4c4

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<ncr(i,j)<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}