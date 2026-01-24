#include <iostream>
#include <windows.h>
using namespace std;
int main(){
int hours=0;
int min=0;
int sec=0;

cout<<"Hours : ";
cin>>hours;
cout<<"Min : ";
cin>>min;
cout<<"Second : ";
cin>>sec;
while (true)
{

 system("cls");
 cout<<"*******CLOCK********\n";
 if(sec>59){
    min++;
    sec=0;
 }
 if(min>59){
    hours=0;
    min=0;
 }
 if(hours>23){
    hours=0;
 }
 cout<<hours<<":"<<min<<":"<<sec<<endl;
 sec++;
 cout<<"********************\n";
Sleep(900);

}
} 