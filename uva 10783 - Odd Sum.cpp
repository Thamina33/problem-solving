#include<iostream>
using namespace std;
int main()
{

    int  num1,num2,sum;
    int i,testcase, counter;
    cin>>testcase;
    counter=0;
    while(testcase--)
    {
        cin>>num1>>num2;
        sum=0;
    if(num1%2 == 0){
        num1++;
    }
        for(i=num1; i<=num2 ;i=i+2)
        {
            if(i%2==1)
            {
                sum= sum+i;
            }
        }
        cout<<"Case "<<++counter<<": "<<sum<<endl;
    }
    return 0;

}
