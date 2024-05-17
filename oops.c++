#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;
    int rollno;

public:
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Student(int rollno, string name)
    {
        this->rollno = rollno;
        this->name = name;
    }

    // void setName(string name)
    // {
    //     this->name = name;
    // }
    // void setAge(int age)
    // {
    //     this->age = age;
    // }

    int getAge()
    {
        return age;
    }
    string getName()
    {
        return name;
    }
    int getRollno()
    {
        return rollno;
    }
};

int main()
{
    // Student n1;
    // n1.setAge(10);
    // cout << n1.getAge() << endl;
    Student n1("Shivansh", 21);
    Student n2("Abhinav", 19);
    Student n3(894, "tanishka");
    cout << n1.getAge() << endl;
    cout << n1.getName() << endl;
    cout << n2.getAge() << endl;
    cout << n2.getName() << endl;
    cout << n3.getName() << endl;
    cout << n3.getRollno() << endl;

    return 0;
}