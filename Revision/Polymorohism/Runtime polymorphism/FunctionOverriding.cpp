// CPP program to illustrate
// Operator Overloading
// #include<iostream>
// using namespace std;


// // Before virtual keyword
// class Base {
// public:
//     void print(){
//         cout<<"This is the base class"<<endl;
//     }

//     void display(){
//         cout<<"This is base class display function"<<endl;
//     }
// };

// class Derieved:public Base{
// public:
//     void print(){
//         cout<<"This is the derieved class"<<endl;
//     }

//     void display(){
//         cout<<"This is derieved class display function"<<endl;
//     }

// };

// int main()
// {
//     // Making a pointer of base class
//     Base *baseptr;

//     // Making object of derieved class
//     Derieved d;

//     // Poiniting base to dereieved pointer 
//     baseptr = &d;

//     // Now if we print for baseptr it should print function of dereived class 
//     // But when you will run code it will run for base class
//     // To overcome this problem we use virtual keyword, so that it can do runtime binding 
//     // Means when we run program it can print for derieved class
//     baseptr -> print();
//     baseptr -> display();
// }

// With virtual keyword ----------------------------------------

#include<iostream>
using namespace std;


// Before virtual keyword
class Base {
public:
    virtual void print(){
        cout<<"This is the base class"<<endl;
    }

    virtual void display(){
        cout<<"This is base class display function"<<endl;
    }
};

class Derieved:public Base{
public:
    void print(){
        cout<<"This is the derieved class"<<endl;
    }

    void display(){
        cout<<"This is derieved class display function"<<endl;
    }

};

int main()
{
    // Making a pointer of base class
    Base *baseptr;

    // Making object of derieved class
    Derieved d;

    // Poiniting base to dereieved pointer 
    baseptr = &d;


    baseptr -> print();
    baseptr -> display();
}

