#include <iostream>
using namespace std;

int main() {
    int manks;
    cout<<"Enter The Manks:";
    cin>>manks;
  if (manks >=90) {
    cout << "You Get A+: " << manks << endl;
  }
  else if (manks >=80) {
    cout << "You Get A: " << manks << endl;
  }
  else if (manks >=70) {
    cout << "You Get B+: " << manks << endl;
  }
  else if (manks >=60) {
    cout << "You Get B: " << manks << endl;
  }
  else if (manks >=50) {
    cout << "You Get C+: " << manks << endl;
  }
  else if (manks >=40) {
    cout << "You Get C: " << manks << endl;
  }
  else if (manks >=33) {
    cout << "You Get P: " << manks << endl;
  }
  else{
      cout<<"F";
  }
  
    return 0;
}