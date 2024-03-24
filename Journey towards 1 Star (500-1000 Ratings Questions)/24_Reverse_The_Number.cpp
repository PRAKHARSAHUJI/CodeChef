#include <iostream>
using namespace std;
int reverse_number (int n)
{
    int new_number =0;
for(;n>0;)
{

    int ld;
    ld=n%10;
    n=n/10;
    new_number= new_number*10+ld;

}
return new_number;
}

int main ()
{

int t;
cin>>t;
for(int i = 0 ;i<t;i++)
{
    int n;
    cin>>n;
    cout<<reverse_number(n)<<endl;
}

return 0;
}