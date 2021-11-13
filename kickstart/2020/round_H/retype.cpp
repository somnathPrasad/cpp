/*
    ----Problem------
    After spending many hours studying for programming competitions, you decided to take a rest and play video games. You are currently playing an adventure game called Quick Start.

    This game has N levels, and you are currently on the K-th level. Unfortunately, you just realized that to beat the boss at the final level, you will need a special sword, which can be picked up at level S. You have already completed that level, but you forgot to pick up the sword at that level.

    Now you want to pick up the sword and finish the game in the least amount of time possible, and for that you have two options:

        1. Restart the game and complete all levels again, starting from level 1.
        2. Move to previous levels until you reach level S, pick up the sword and complete all the remaining levels, starting from level S.
    Every time you enter a level you have to exit it, either by completing it and going to the next level or by moving to a previous level or by finishing / exiting the game. Exiting any level takes 1 minute. That means, for example, that it took you L minutes to complete the first L levels.
    Your task is to discover which option would result in the least amount of total time to finish the game (including the time you have already spent).

    ---Sample---

    Input

    2
    10 5 2
    10 7 6
        
    Output
    
    Case #1: 15
    Case #2: 12

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, k, s;  // n = number of levels, k = kth level / current level, s = sword level 
    int t;
    cin >> t;
    int test_count = 1;
    while (t--)
    {
        cin >> n >> k >> s;
        if ((k - 1) + (n + 1) < (k - 1) + (k - s) + ((n - s) + 1))
        {
            cout << "Case #" << test_count << ": " << (k - 1) + (n + 1);
        }
        else
        {
            cout << "Case #" << test_count << ": " << (k - s) + ((n - s) + 1) + (k - 1);
        }
        cout << "\n";
        test_count++;
    }
    return 0;
}

/*

---logic explained---
    time to complete the game from the start = (k - 1) + (n + 1)
    time to go back to sword level and then complete all the remaining levels = (k - 1) + (k - s) + ((n - s) + 1)

*/