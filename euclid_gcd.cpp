#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int gcd(int n1, int n2){
    int rem=1;
    while (rem != 0)
    {
        if(n1%n2==0){
            return rem;
        }else{
            rem = n1%n2;
            n1=n1;
            n2=rem;
        }
    }
    return rem;
}

int main()
{
    int n1, n2;
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
    return 0;
}