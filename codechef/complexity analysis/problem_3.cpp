//hard approach
// #include <iostream>

// using namespace std;

// Lapindromes


// string get_first_half(string word){
//     string first_half;
//     if(word.length()%2 == 0)
//     {first_half = word.substr(0,word.length()/2);}
//     else
//     {
//         int center_index = word.length()/2;
//         first_half = word.substr(0,center_index);
//     }
//     return first_half;
// }

// string get_second_half(string word){
//     string second_half;
//     if(word.length()%2 == 0)
//     {second_half=word.substr(word.length()/2, word.length()-1);}
//     else
//     {
//         int center_index = word.length()/2;
//         second_half = word.substr(center_index+1, word.length()-1);
//     }
//     return second_half;
// }

// void check_palindrome(string word){
//     string first_half, second_half;
//     first_half = get_first_half(word);
//     second_half = get_second_half(word);
//     int half_len = first_half.length();
//     int count = 0;

//     for(int j=0; j < half_len; j++)
//     {
//         for (int i = 0; i < half_len; i++)
//         {
//             if(first_half[0] == second_half[count])
//             {
//                 first_half.erase(0,1);
//                 second_half.erase(i,1);
//             }
//             if (first_half.length() == 0)
//             {
//                 break;
//             }
            
//             count++;
//         }
//         count = 0;
//     }

//     if (second_half.length()!= 0)
//     {
//         cout<<"NO"<<endl;
//     }
//     else{
//         cout<<"YES"<<endl;
//     }
// }

// int main(){
//     int test_case;
//     cin>>test_case;
//     string words[test_case];
//     for (int i = 0; i < test_case; i++)
//     {
//         cin>>words[i];
//     }
//     for (int i = 0; i < test_case; i++)
//     {
//         check_palindrome(words[i]);
//     }
//     return 0;
// }

//EASY APPROACH and better
// learnt from one of the solutions
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.length();
        string a = s.substr(0, (len+1)/2);
        string b = s.substr(len-((len+1)/2), len);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(a == b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    }
    return 0;
}