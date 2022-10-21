#include<iostream>

using namespace std;

int main(){

    cout<<"Hello World";

    int a=123;
    cout<<a<<endl;

    float b1=1.2;
    cout<<b1<<endl;

    char b='a';
    cout<<b<<endl;

    string d="this is a string";
    cout<<d<<endl;

    int s=sizeof(a);
    cout<<s<<endl;

    // comments in c++
    // single line comment 
    /*multi 
    line
    comment*/


    // type casting 

    int a='a';
    cout<<a<<endl;

    char b=97;
    cout<<b;

    char a=123456;
    cout<<a<<endl;

    int a=5;
    int b=2;
    

    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<b%a<<endl;


    int a=10;
    int b=20;

    if(a==10 && b==20){
        cout<<"true";
    } else{
        cout<<"false";
    }

  if(a==10 || b==0){
        cout<<"true";
    } else{
        cout<<"false";
    }

  if(a==10 && b==20){
        cout<<"true";
    } else{
        cout<<"false";
    }

    
    
    return 0;
}