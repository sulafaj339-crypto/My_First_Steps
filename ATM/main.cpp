#include <iostream>

using namespace std;

void ShowMenu(){
cout<<"*********Menu**********\n";
cout<<"1.See The Palance:\n";
cout<<"2.Deposit:\n";
cout<<"3.Withdrawal:\n";
cout<<"4.Exit:\n";
}
int main()
{
int choice,palance=1000,a,b;

while(choice!=4){
ShowMenu();
cin>>choice;
switch(choice){
case 1:cout<<palance<<endl;
break;
case 2:cout<<"Deposit...";
cin>>a;
palance+=a;
cout<<palance<<endl;
case 3:cout<<"Withdrawal...";
cin>>b;
if(b>palance){
    cout<<"There is no money.\n";
}
palance-=b;
cout<<palance<<endl;
break;
}
}
return 0;
}
