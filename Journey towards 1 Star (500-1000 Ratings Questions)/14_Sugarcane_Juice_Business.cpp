#include <iostream>
using namespace std;
int main() 
{
int t;
cin>>t;


for(int i = 0;i<t;i++)
{
int n;
cin>>n;


int price =50;
float spend = (50*0.2)+ (50*0.2)+ (50*0.3);
int profit = price - spend ;

cout<<profit*n<<endl;

}
}