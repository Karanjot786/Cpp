#include <iostream>
using namespace std;

int main() {
    // Logical Operator
    bool result;
    
    result = (3 != 5) && (3 < 5);
    cout<<"This is AND: "<<result<<endl;
    result = (3 != 5) || (3 < 5);
    cout<<"This is OR: "<<result<<endl;
    result = !(5 == 2);
    cout<<"This is NOT: "<<result<<endl;
    

    return 0;
}