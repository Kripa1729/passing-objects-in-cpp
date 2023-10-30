#ifndef kanha
#define kanha

#include<iostream>
#include<string.h>
 
 using namespace std;
 class complex{
private:
int a;
int b;
public:
void set_data(int,int);
void display_data();
complex add (complex);
 };
 void complex::set_data(int x,int y){
a=x;
b=y;
 }
 void complex::display_data(){
    cout<<a<<b;
 }
 complex complex ::add(complex c){
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
 }
 
#endif