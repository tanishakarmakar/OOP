#include <iostream>
using namespace std;

int n;
struct Student{
    char name[20];
    int age;
    int roll;
};


int main() {
    struct Student s[n];
    cout << "Enter number of students" << endl;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "Enter name for student "<< i << endl;
        cin >> s[i].name;
        cout << "Enter age for student " <<i<< endl;
        cin >> s[i].age;
        cout << "Enter roll number for student " << i<< endl;
        cin >> s[i].roll;
    }

    for(int i = 1; i <= n; i++){
        cout << "Name for student " << i <<": "<<s[i].name << endl;
        cout << "Age for student " << i<<": "<<s[i].age << endl;
        cout << "Roll number for student " <<i<<": "<< s[i].roll << endl;
    }
    return 0;
}
