#include<bits/stdc++.h>
using namespace std;

// A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

// A class in C++ is a user-defined type or data structure declared with keyword class that has data and functions (also called member variables and member functions) as its members whose access is governed by the three access specifiers/ modifiers private, protected or public.

class Student{

    // Data Members
    string name;
    int age;
    bool gender;
    int marks;

    public:
    // Constructors
    Student(){}; // Default constructor
    // Parameterised constructor
    Student(string s, int a, bool g){ 
        name = s;
        age = a;
        gender = g;
    }

    // Default copy constructor->
//     Shallow Copy
//     The object and its copy, point to the same memory address. If you make a change
//     in its copy it gets changed in the main copy as well and vice versa.
    
    
    // Copy Constructor
//     Deep Copy
//     The object and its copy, point to different addresses in the memory. If you make a
//     change in its copy it will not get changed in the main copy and vice versa.
    Student(Student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // Member Functions
    // Setter->Setters are public functions used to set private data members in the class.
    void setData(string s, int a, bool g){
        name = s;
        age = a;
        gender = g;
    }

    // Getter-> Getters are public functions used to get private data members in the class.
    void getData(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
    }

    // Operator overloading
    bool operator == (Student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }

    // Function Overloading 
    int avg_marks(int m){
        marks = m;
        return marks;
    }

    int avg_marks(int m, int n){
        marks = (m+n)/2;
        return marks;
    }

    // Destructor
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
};


int main(){
    Student Pranit, Aditya; // Default constructor called
    Pranit.setData("Pranit", 20, 0); 
    Aditya.setData("Aditya", 19, 0);
    Pranit.getData();Aditya.getData();

    Student Ajay("Ajay", 18, 0); // Parameterised constructor called
    Ajay.getData();
    
    Student Pranit2(Pranit); // copy constructor called
    Pranit2.getData();

    // == operator overloaded
    if(Pranit==Pranit2){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

    // avg_marks function overloaded
    cout<<"Avg Marks of Pranit = "<<Pranit.avg_marks(98)<<endl;
    cout<<"Avg Marks of Aditya = "<<Aditya.avg_marks(92,94)<<endl;
    return 0;
}