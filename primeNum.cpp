#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            flag = 1;
        }
        
    }
    if (flag == 0)
    {
        cout<<"Prime Number.";
    }else{
        cout<<"Not prime number.";
    }
     
    return 0;
}