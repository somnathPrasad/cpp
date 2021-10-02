#include <bits/stdc++.h>

using namespace std;

int main(){
    // no of levels = n
// current level = k
// sword level = s

// option 1;
// time_required = (k-1)+(n+1)

// option 2;
// time_required = (k-s)+((n-s)+1)

    long int n,k,s;
    int t;
    cin>>t;
    int test_count = 1;
    while(t--){
            cin>>n>>k>>s;
    if((k-1)+(n+1)<(k-s)+((n-s)+1)+(k-1)){
        cout<<"Case #"<<test_count<<": "<<(k-1)+(n+1);
    }else{
        cout<<"Case #"<<test_count<<": "<<(k-s)+((n-s)+1)+(k-1);
    }
    cout<<"\n";
    test_count++;
    }
    return 0;
}