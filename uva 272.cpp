#include<iostream>
//#include<cstdlib>
#include<string.h>
using namespace std;
int main()
{
    char text[1000];
    int length,counter,i;
    while(cin>>text)
    {
        length = strlen(text);

            for(i = 0; i<length; i++)
            {
                if(text[i] == '"')
                {
                    counter +=1;
                    if(counter%2 == 1)
                    {
                        cout<<"``";
                    }
                    else
                    {
                        cout<<"''";
                    }
                }
                else
                {
                    cout<<text[i];
                }
            }
            cout<<endl;

        }
    return 0;


}
