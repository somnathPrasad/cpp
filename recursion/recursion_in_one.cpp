#include <iostream>
using namespace std;

int sum(int n){
  if(n==0){
    return 0;
  }
  return sum(n-1)+n;}
int power(int n,int pow){
  if(pow==0){
    return 1;
  }
  return power(n,pow-1)*n;}
int factorial(int n){
  if(n==0){
    return 1;
  }
  return factorial(n-1)*n;}
int fibonacci(int n){
  if(n==0 || n==1){
    return n;
  }
  return fibonacci(n-1)+fibonacci(n-2);}
bool is_array_sorted(int arr[],int len){
  if(len==1){
    return true;
  }
  return is_array_sorted(arr, len-1) && arr[len-2]<=arr[len-1];}

void print_in_decreasing(int n){
  if(n==0){
    return;
  }
  cout<<n<<" ";
  print_in_decreasing(n-1);}

void print_in_increasing(int n){
  if(n==0){
    return;
  }
  print_in_increasing(n-1);
  cout<<n<<" ";}

void first_occ(int arr[],int n,int elm,int i=0){
  if(i==n){
    return;
  }
  if(arr[i]==elm){
    cout<<"first: "<<i;
    return;
  }
  first_occ(arr, n, elm, i=i+1);}
void last_occ(int arr[],int n,int elm){
  if(n==-1){
    return;
  }
  if(arr[n-1]==elm){
    cout<<"last: "<<n-1;
    return;
  }
  last_occ(arr, n-1, elm);}

string reverse_string(string s){
  if(s.length()==1){
    return s;
  }
  return reverse_string(s.substr(1))+s[0];}

void replace_pi(string s){
  if(s.length()==0){
    return;
  }
  if(s.substr(0,2)=="pi"){
    cout<<"3.14";
    replace_pi(s.substr(2));
  }else{
    cout<<s[0];
    replace_pi(s.substr(1));
  }}

void tower_of_hanoi(int n, char start, char end, char helper){
  if(n==0){
    return;
  }
  tower_of_hanoi(n-1,start,helper,end);
  cout<<"Move disk "<<n<<" from "<<start<<"-->"<<end<<endl;
  tower_of_hanoi(n-1,helper,end,start);}

string remove_duplicate(string s){
  if(s.length()==0){
    return "";
  }
  string rest = remove_duplicate(s.substr(1));
  if(rest[0] == s[0]){
    return rest;
  }else{
    return s[0]+rest;
  }}

string move_x_to_end(string s){
  if(s.length()==0){
    return "";
  }
  if(s.substr(0,1)=="x"){
    return move_x_to_end(s.substr(1))+"x";
  }
  return s.substr(0,1)+move_x_to_end(s.substr(1));}

void substrings(string s,string ans){
  if(s.length()==0){
    cout<<"'"<<ans<<"'"<<endl;
    return;
  }
  char first = s[0];
  string rest = s.substr(1);
  
  substrings(rest, ans);
  substrings(rest, ans+first);
}

void substrings_with_ascii(string s,string ans){
  if(s.length()==0){
    cout<<"'"<<ans<<"'"<<endl;
    return;
  }
  char first = s[0];
  int ascii = first;
  string rest = s.substr(1);
  substrings_with_ascii(rest, ans);
  substrings_with_ascii(rest, ans+first);
  substrings_with_ascii(rest, ans+to_string(ascii));
}

string keyset[] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans){
  if(s.length()==0){
    cout<<ans<<endl;
    return;
  }
  char ch = s[0];
  string code = keyset[ch-'0'];
  string rest = s.substr(1);
  for(int i = 0; i<code.length();i++){
    keypad(rest,ans+code[i]);
  }
}

void string_permutations(string s, string ans){
  if(s.length()==0){
    cout<<ans<<endl;
    return;
  }
  for(int i=0; i<s.length(); i++){
    char ch = s[i];
    string rest = s.substr(0,i)+s.substr(i+1);
    string_permutations(rest, ans+ch);
  }
}

int count_path(int s,int e){
  if(s==e){
    return 1;
  }
  if(s>e){
    return 0;
  }
  int count = 0;
  for(int i=1;i<=6;i++){
    count+=count_path(s+i, e);
  }
  return count;
}

int count_path_maze(int n,int i,int j){
  if(j==n-1 && i==n-1){
    return 1;
  }
  if(j>=n || i>=n){
    return 0;
  }
  return count_path_maze(n, i+1, j)+ count_path_maze(n, i, j+1); 
}

int tiling_ways(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  return tiling_ways(n-1)+tiling_ways(n-2);
}
int knapsack(int value[], int wt[], int n, int w){
  if(n==0 || w==0){
    return 0;
  }
  if(wt[n-1]>w){
    return knapsack(value, wt, n-1, w);
  }
  return max(knapsack(value, wt, n-1, w-wt[n-1])+value[n-1],knapsack(value, wt, n-1, w));
}

int main() {
  int arr[]={2,13,100,21,13};
  string s="abc";
  // cout<<sum(4);
  // cout<<power(3,3);
  // cout<<factorial(4);
  // cout<<fibonacci(0);
  // cout<<is_array_sorted(arr, 4);
  // print_in_decreasing(10);
  // print_in_increasing(10);
  // first_occ(arr, 5, 13);
  // last_occ(arr, 5, 13);
  // cout<<reverse_string("somnath");
  // replace_pi("pihahapi");
  // tower_of_hanoi(3,'A','C','B');
  // cout<<remove_duplicate("aabbccccdd");
  // cout<<move_x_to_end("aasxxfsxdd");
  // substrings("ABC","");
  // substrings_with_ascii("AB", "");
  // keypad("23","");
  // string_permutations("ABC", "");
  // cout<<count_path(0, 3);
  // cout<<count_path_maze(3, 0, 0);
//   cout<<tiling_ways(4);
  int value[]={100,50,150};
  int wt[]={10,20,30};
  cout<<knapsack(value, wt, 3, 50);
} 