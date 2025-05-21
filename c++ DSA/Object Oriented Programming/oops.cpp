  #include <iostream>
  using namespace std;

  class student{
public:
string name;
double* cgpaptr;

student(string name, double cgpa){
    this->name = name;
    cgpaptr = new double;
    *cgpaptr = cgpa;
}

student(student &obj){
    this->name = obj.name;
    cgpaptr = new double;
    *cgpaptr = *obj.cgpaptr;
}

void getinfo(){
    cout << "name = " << name << endl;
    cout << "cgpa = " << *cgpaptr << endl;
}
  };

  int main(){
student s1("adnan", 9.0);
s1.getinfo();
student s2(s1);
s2.name = "chandan";
*(s2.cgpaptr)= 8.1;
s2.getinfo();
  }