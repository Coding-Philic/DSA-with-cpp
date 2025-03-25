#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter you marks : ";
    cin >> marks;
    if(marks>=90){
        cout << marks << " = grade A";
    }
    else if(marks >=80 && marks<90){
        cout << marks << " = grade B";
    }
    else if(marks >=60 && marks<80){
        cout << marks << " = grade C";
    }
    else if(marks >=32 && marks<60){
        cout << marks << " = grade D";
    }
    else{
        cout << "fail";
    }
}