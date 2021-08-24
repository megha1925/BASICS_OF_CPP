// structures
#include <iostream>
#include <string>

using namespace std;

//user defined data type
class Car
{
private:         //access modifiers
    string name; //data members
    int age;

public:
    Car()
    {
        name = "Pushpa";
        age = 15;
    }
    //member functions
    void setValue(string x, int y) //set
    {
        name = x;
        age = y;
    }
    void getValue() //get
    {
        cout << "name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

class Maruti : public Car
{
private:
    string sex;

public:
    void setVal(string x) //set
    {
        sex = x;
    }
    void getVal() //get
    {
        cout << "sex = " << sex << endl;
    }
};

int main()
{
    int a = 21;
    string b = "Tarun";
    Car obj1, obj2; //obj1 is an object || instances of class
    // obj1.setValue(b, a);
    // obj1.getValue();
    // obj2.setValue("Megha", 20);
    // obj2.getValue();
    Maruti ok;
    ok.setVal("Male");
    ok.getVal();
    ok.getValue();
    return 0;
}
