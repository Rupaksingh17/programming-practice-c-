#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        cout<<i<<endl;
    }
 return 0;

}