#include<iostream>
using namespace std;
int main(){


    int testcase,dd,mm,yy,y2,counter;
    cin>>testcase;
    counter=0;
    while(testcase--){
            cin>>dd>>mm>>yy>>y2;

        if(dd==29 && mm == 2){
            y2 = y2/4 - y2/100 + y2/400;
            yy = yy/4 - yy/100 + yy/400;
        }
        cout<<"Case "<<++counter<<": "<<y2-yy<<endl;

    }
    return 0;

}
