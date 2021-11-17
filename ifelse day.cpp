#include<iostream>
using namespace std;
int main()
{
int days;
cout<<"Enter days:";
cin>>days;
if(days==1)
   cout<<"monday:";
else if(days==2)
    cout<<"tuesday:";
else if(days==3)
    cout<<"Wednesday:";
else if(days==4)
    cout<<"Thursday:";
else if(days==5)
    cout<<"Friday:";
else if(days==6)
    cout<<"Saturday:";
else if(days==7)
    cout<<"sunday:";
else
    cout<<"wrong stmt:";
return 0;
}
