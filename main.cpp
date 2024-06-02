#include <iostream>
using namespace std;
int main() {
  cout<<"Welcome to dtx_07 hospital"<<endl;
  cout<<"Enter your name:"<<endl;
  string name;
  cin>>name;
  cout<< "Enter your temperature in degree celcius:"<<endl;
  float deg_celcius;
  float fahrenheit;
  cin>> deg_celcius;
  fahrenheit = (deg_celcius*9/5)+32;
  cout<< "Your temperature in fahrenheit is:"<<fahrenheit<<endl;
  cout<<"You may proceed to the doctor please..Thank You!";
  
  
}