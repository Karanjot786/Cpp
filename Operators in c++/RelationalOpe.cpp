#include <iostream>
using namespace std;

int main() {
    // Relational Operator
    int a = 6;
    int b = 3;
    bool result;
    
    result = (a == b);
    cout<<"This is Equal To: "<<result<<endl;
    result = (a != b);
    cout<<"This is Not Equal To: "<<result<<endl;
    result = a > b;
    cout<<"This is Greater Than: "<<result<<endl;
    result = a < b;
    cout<<"This is Less Than: "<<result<<endl;
    result = a >= b;
    cout<<"This is Greater Than or Equal To: "<<result<<endl;
    result = a <= b; 
    cout<<"The Less Than or Equal To: "<<result<<endl;
    

    return 0;
}