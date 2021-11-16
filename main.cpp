#include <iostream>
#include <string>
#include <vector>
#include <map>
// #include <format>

using namespace std;

class Student{
    string name;
    int age;
    map <string,int> dictionary;
    vector <string> days = {"Monday","Tuesday","Wednesday","Thursday","Friday"};
private:
    string course;
public :
    Student(string name,int age){
        this->name = name;
        this->age = age;
    };
    void printstudentinfo(){
        cout << "name: " << "  " << name << endl;
        cout << "age: " << "  " <<  age << endl;
    }
    void setcourse(string course){
        this->course = course;
    }
    void getcourse()
    {
        cout << "course: " << "  " <<  course << endl;
    }
    void updatedict() {
        for(auto i: days){
            pair <string,int> p1(i, 0);
            dictionary.insert(p1);
        }
    }
    void printdict(){
        cout << '{' << endl;
        for (auto i: dictionary){
            cout << "  " << "'" + i.first + "'" << " : " << i.second << endl; 
        }
        cout << '}' << endl;
    }
};

int main() {
    Student std1("Jam",19);
    std1.printstudentinfo();
    std1.setcourse("Computer science");
    std1.getcourse();
    std1.updatedict();
    std1.printdict();
    // cout << format("Hello {}!\n", "world");
} 