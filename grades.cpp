#include <iostream>
using namespace std;
int main()
{
    int a;
    
    cout<<"enter your grades =";
    cin>>a;

    if ( a >= 35 & a<= 50 )
    {
        cout<<"Passed"<<endl;
    }
    else if ( a>=50 & a<=75)
    {
        cout<<"2nd division"<<endl;
    }
    else if ( a>=75 )
    {
        cout<<"1st divison"<<endl;
    }
    else 
    {
        cout<<"failed"<<endl;
    }
    return 0;
}
