#include <iostream>
using namespace std;
void display(string name, int age, float per);
int main()
{

    // display("Alice", 20, 88.5);
    int no;
    int summasion(int n);
    cout<<"enter a number";
    cin>>no;
    int om = summasion(no);
    cout<<"returned value is "<<om;
    return 0;
}

void display(string name, int age, float per)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Percentage: " << per << endl;
}

int summasion(int n){
    int om =0;
    for(int i=1;i<=n;i++){
        om=om+i;
    }
    cout<<"summasion is "<<om;
    return om;
}



// write a cpp program to write an adidition of 2 numbers using following prototype  by using  void sum(int  by using void sum(int aby using  void sum(int a, int b); and int addition(int a, int b);
void sum(int a, int b){
    int sum = a + b;
    cout<<"sum is "<<sum;
}
int addition(int a, int b){

    int sum = a + b;
    return sum;
}
int main(){
    int a, b;
    cout<<"enter two numbers";
    cin>>a>>b;
    sum(a, b);
    int result = addition(a, b);
    cout<<"returned sum is "<<result;
    return 0;
}



