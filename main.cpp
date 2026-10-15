//stretch goal attempted
#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    string name;
    double gpa;
    
    cout << "Hi, what is your name?" <<endl;
    getline(cin, name);
    cout << "Nice to meet you " <<name<< ". What is your GPA" <<endl;
    cin >> gpa ;
    cout << fixed << setprecision (1);
    cout << "Wow, " << name << ". Yor GPA is " << gpa << " get ya grades up!" <<endl;
    
    
    
    return 0;
}
