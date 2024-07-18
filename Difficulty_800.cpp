#include <iostream>

using namespace std;

int main()
{
                                            // A. Bit++
    int n=0;
    int x=0;
    string st="";
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>st;
            if(st=="++X" || st=="X++")
                x++;
            else
                x--;
        }
    cout<<x;

    return 0;
}
