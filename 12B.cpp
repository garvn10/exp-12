// NAME - GARV NANDWANA
// PRN - 23070123167
// EXPERIMENT - 12(B) 

#include<iostream>
using namespace std;
class Num
{
    public:
    Num(int c, int d)
    {
        if(c>d)
        {
            cout<<c<<" is greater.";
        }
        else 
        {
            cout<<d<<" is greater.";
        }
    }
};
int main()
{
    Num n1(4,3);
} 

// Output 
// 4 is greater. 
