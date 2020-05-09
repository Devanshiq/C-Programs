#include<iostream>
using namespace std;

int myvar=20;
void sum(int firstno,int secondno){

cout<<"Sum of integers is ="<<firstno+secondno<<endl;

}

void sum(float firstno, float secondno)
{

cout<<"Sum of integers is ="<<firstno+secondno<<endl;

}
int main(){

    //int myarray[19]={38,93,393};
       int myarray[19];
  //  cout<<myarray[0];
    for(int i=0;i<=18;i++){

        myarray[i]=67;
        cout<<i<<"------"<<myarray[i]<<endl;
    }


    sum(265,267);
    float a=54.5,b=24.8;
    sum(a,b);

    //sum(54.5,24.8);
int myvar=10;
cout<<::myvar << endl;           //urnary scope reolution   global variable
//cout<<ln;
cout<<myvar;           //local variable
return 0;



}
