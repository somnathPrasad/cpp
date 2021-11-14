/*

----Problem----
There are N houses for sale. The i-th house costs Ai dollars to buy. You have a budget of B dollars to spend.

What is the maximum number of houses you can buy?

---Input---
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a single line containing the two integers N and B. The second line contains N integers. The i-th integer is Ai, the cost of the i-th house.

---Output---
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum number of houses you can buy.

--Sample--

Input

3
4 100
20 90 40 90
4 50
30 30 10 10
3 300
999 999 999
 	
Output

Case #1: 2
Case #2: 3
Case #3: 0

  


*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int t;
    int testcase=0;
    cin >> t;
    while (t--)
    {
        testcase++;
        int no_of_houses,budget;
        cin>>no_of_houses>>budget;
        int house_prices[no_of_houses];

        for (int i = 0; i < no_of_houses; i++)
        {cin>>house_prices[i];}

        int _n = sizeof(house_prices)/sizeof(house_prices[0]);
        sort(house_prices,house_prices+_n);

        int bought_houses=0;
        for (int i = 0; i < no_of_houses; i++)
        {
            if(budget<house_prices[i]){
                break;
            }else{
                budget-=house_prices[i];
                bought_houses++;
            }
        }
        cout << "Case #"<<testcase<<": "<<bought_houses<<endl;
    }

    return 0;
}