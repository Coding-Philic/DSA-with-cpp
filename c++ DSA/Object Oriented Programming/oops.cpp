#include <iostream>
#include <string>
using namespace std;

class Teacher {
    // Properties / attributes
    private: 
        double salary;

    public:
    string name;
    string dep;
    string subject;

    Teacher() {
        dep = "cse";
    }

    Teacher(string name, string dep, string subject, double salary){
        this->name = name;
        this->dep = dep;
        this->subject = subject;
        this->salary = salary;
    }

    void getinfo(){
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
    } 
};

int main() {
    cout << "heheh " << endl;
    Teacher t1("Adnan", "cse", "c++", 250000);
    t1.getinfo();
    return 0;
}