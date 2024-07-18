                                          // A. Bit++
#include <iostream>

using namespace std;

int main()
{
                                            
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

                                            // A. Way Too Long Words
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0)
        {
           string str;
           cin>>str;
           if(str.length()>10)
            {
                cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
            }
           else
            cout<<str<<endl;
           n--;
        }

    return 0;
}
