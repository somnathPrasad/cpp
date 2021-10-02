#include <iostream>
#include <vector>

using namespace std;

int main(){
    long int n, count=0;
    vector<int> factors;
    cin>>n;
    for (long int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            factors.push_back(i);
            count++;
        }
    }
    cout<<count<<"\n";

    for (auto i = factors.begin(); i != factors.end(); ++i)
    {
        cout<<*i<<" ";
    }
    
        
    return 0;
}