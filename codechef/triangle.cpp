#include <iostream>
#include <math.h>

using namespace std;

int findArea(float a, float b, float c){
    float side1, side2, side3;
    side1 = sin(a);
    side2 = sin(b);
    side3 = sin(c);
    float s = (side1+side2+side3)/2;
    float area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    cout<<area;
    return area;
}

int main(){
    float a, b, c;
    float area=0;
    cin>>a>>b>>c;
    
    if (a+b+c==180)
    {
        area = findArea(a, b, c);
        if (area >0)
        {
            cout<<"YES";
            // cout<<area;
        }else{
            cout<<"NO";
        }
        
    }else{
        cout<<"NO";
    }
    

    return 0;
}