#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int max_revenue=0;
    int test_case;
    cin>>test_case;

    long int budgets[test_case];
    for (long int i = 0; i < test_case; i++)
    {
        cin>>budgets[i];
    }
    
    int n = sizeof(budgets)/sizeof(budgets[0]);
    sort(budgets, budgets+n);

    for (long int i = 0; i < test_case; i++)
    {
        long long int revenue;
        revenue = budgets[i] * (test_case-i);
        if (max_revenue < revenue)
        {
            max_revenue = revenue;
        }        
    }
    cout<<max_revenue;
    
    return 0;
}