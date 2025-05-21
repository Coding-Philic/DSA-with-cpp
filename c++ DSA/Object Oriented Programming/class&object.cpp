// #include <iostream>
// #include <string>
// using namespace std;

// class Teacher {
//     // Properties / attributes
// private:
//     double salary; // Teacher ka salary private hai, direct access nahi kar sakte

// public:
// // non-parameterized constructor
//     Teacher() {
//         // Constructor jab bhi object create hoga, tab yeh chalega
        
//         dep = "Computer science"; // Default department set kar diya
//         cout << "Hey, this is constructor" << endl; // Constructor call hone ka message
//     }

//     // parameterized constructor
//     Teacher(string n , string d, string s, double sal){
// name = n;
// dep = d;
// subject =s;
// salary = sal;
//     }
//     string name; // Teacher ka naam
//     string dep; // Teacher ka department
//     string subject; // Teacher ka subject

//     // Methods / member functions
//     void changedept(string newdept) {
//         // Department ko change karne ke liye function
//         dep = newdept;
//     }

//     // Setter function to set salary
//     void setsalary(double s) {
//         salary = s; // Salary ko private hone ke bawajood set karne ka tarika
//     }

//     // Getter function to get salary
//     double getsalary() {
//         return salary; // Salary ko private hone ke bawajood access karne ka tarika
//     }

//     void getinfo(){
//         cout << "Name : " << name << endl;
//         cout << "Subject : " << subject << endl;

//     }
// };

// class Account  {
//     // Properties / attributes
// private:
//     double balance; // Account ka balance private hai
//     string password; // Account ka password bhi private hai

// public:
//     string accountId; // Account ID public hai, direct access kar sakte hain
//     string username; // Username bhi public hai

//     // Constructor to initialize account details
//     Account(string accId, string user, double bal, string pass) {
//         accountId = accId; // Account ID set kar rahe hain
//         username = user; // Username set kar rahe hain
//         balance = bal; // Balance set kar rahe hain
//         password = pass; // Password set kar rahe hain
//     }

//     // Method to deposit money
//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount; // Balance badha rahe hain
//             cout << "Deposit successful! New balance: " << balance << endl;
//         } else {
//             cout << "Invalid deposit amount!" << endl;
//         }
//     }

//     // Method to withdraw money
//     void withdraw(double amount, string pass) {
//         if (pass == password) { // Password check kar rahe hain
//             if (amount > 0 && amount <= balance) {
//                 balance -= amount; // Balance ghata rahe hain
//                 cout << "Withdrawal successful! Remaining balance: " << balance << endl;
//             } else {
//                 cout << "Invalid withdrawal amount or insufficient balance!" << endl;
//             }
//         } else {
//             cout << "Incorrect password!" << endl;
//         }
//     }

//     // Method to display account details
//     void displayAccountDetails() {
//         cout << "Account ID: " << accountId << endl;
//         cout << "Username: " << username << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };


// int main() {
//     // Teacher class ke objects create kar rahe hain
//     Teacher t1("Adnan", "computerscience", "c++", 25000); // t1 object create kiya
//     // Teacher t2; // t2 object create kiya
// t1.getinfo();
//     // t1 object ke properties set kar rahe hain
//     // t1.name = "Adnan"; // Name set kiya
//     // t1.subject = "C++"; // Subject set kiya
//     // t1.setsalary(500000); // Salary set karne ke liye setter function use kiya
//     // cout << t1.dep << endl; // Department print kar rahe hain
//     // cout << t1.getsalary() << endl; // Salary print karne ke liye getter function use kiya
//     // cout << t1.name << endl; // Name print kar rahe hain

//     // Account class ke object create kar rahe hain
//     Account acc1("12345", "JohnDoe", 10000.0, "password123"); // Account object create kiya

//     // Account details display kar rahe hain
//     acc1.displayAccountDetails();

//     // Deposit kar rahe hain
//     acc1.deposit(5000);

//     // Withdraw kar rahe hain
//     acc1.withdraw(3000, "password123");

//     // Wrong password ke saath withdraw karne ki koshish
//     acc1.withdraw(2000, "wrongpassword");

//     return 0; // Program successful execution ke baad return
// }


// #include <iostream>
// #include <string>
// using namespace std;

// class Teacher {
//     // Properties / attributes
//     private: 
//         double salary;

//     public:
//     string name;
//     string dep;
//     string subject;

//     Teacher() {
//         dep = "cse";
//     }

//     Teacher(string name, string dep, string subject, double salary){
//         this->name = name;
//         this->dep = dep;
//         this->subject = subject;
//         this->salary = salary;
//     }

//     void getinfo(){
//         cout << "name : " << name << endl;
//         cout << "subject : " << subject << endl;
//     } 
// };

// int main() {
//     cout << "heheh " << endl;
//     Teacher t1("Adnan", "cse", "c++", 250000);
//     t1.getinfo();
//     return 0;
// } 