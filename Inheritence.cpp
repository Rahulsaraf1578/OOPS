#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
    // Accessible with in the class
private:
    string Company;
    int Age;

// Accessible by the inherited class
protected:
    string Name;

public:
     void setName(string name){
       Name = name;
   }

   string getName(){
       return Name;
   }

   void setCompany(string company){
       Company = company;
   }

   string getCompany(){
       return Company;
   }

   void setAge(int age){
       if(age>=18)
       Age = age;
   }

   int getAge(){
       return Age;
   }

   Employee(string name,string company, int age){
       Name = name;
       Company = company;
       Age = age;
   }

    void AskForPromotion(){
       if(Age>30)
           cout<<Name<<" got promoted "<<endl;
       else
           cout<<Name<<", sorry no promotion for you"<<endl;
   }
};

class Developer:public Employee{

};

int main(){
    return 0;
}