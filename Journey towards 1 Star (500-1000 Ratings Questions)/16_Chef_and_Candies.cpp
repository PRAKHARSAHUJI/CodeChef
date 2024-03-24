#include <iostream>
using namespace std;
int main() 
{
int t;
cin>>t;


for(int i = 0;i<t;i++)
{
int students,candies;
cin>>students>>candies;
int leftcandies = students - candies ;
if(students<candies)
{
    cout<<0<<endl;
}
else if(leftcandies % 4 ==0)
{
    cout<<leftcandies / 4 <<endl;
}
else
{
    cout<<(leftcandies / 4) +1 <<endl;    
}
}
}