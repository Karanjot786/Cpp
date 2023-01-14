// WAP to divide people into 3 age groups depending upon their age

#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter The age:";
    cin>>age;
  if (age < 12) {
    cout << "You are Child "<< endl;
  }
  else if (age <=18) {
    cout << "You are Teenager"<< endl;
}
  else{
      cout<<"Yor are Adult";
  }
  
    return 0;
}