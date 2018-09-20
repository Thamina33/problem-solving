#include<iostream>
using namespace std;
int main()
{

    unsigned long int num1,num2;
    int counter,carry;;

    while(cin>>num1>>num2)
    {
        counter=0;
        carry = 0;
        if(num1==0 && num2==0)
            break;
        counter =0;
        carry =0;


        while(num1 || num2)
        {
            carry = (num1%10+num2%10 + carry)/10;
            num1/=10;
            num2/=10;
            counter+=carry;
        }
        if(counter == 0)
            cout<<"No carry operation."<<endl;

        else if(counter == 1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<counter<<" carry operations."<<endl;
    }
    return 0;
}
