// Showing only importatnt data and hiding unnecessary details 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// We are going to make AskForPromotion obligotry
// Any class that signs AbstractEmployee has to implement AskForPromotion
// We do this by making AskForPromotion a pure virtual function
class AbstractEmployee{
   virtual void AskForPromotion()=0;
};

// We are signing a contract here and after signing the contract
// It we don't apply the function then it will show error

class Employee:AbstractEmployee{
private:
   string Name;
   string Company;
   int Age;

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

   void IntroductYourself(){
       cout<<"Name-"<<Name<<endl;
       cout<<"Company-"<<Company<<endl;
       cout<<"Age-"<<Age<<endl;
   }

   void AskForPromotion(){
       if(Age>30)
           cout<<Name<<" got promoted "<<endl;
       else
           cout<<Name<<", sorry no promotion for you"<<endl;
   }

};

int main(){

   Employee employee1 =  Employee("Aditi","MKB",25);
   Employee employee2 =  Employee("Jhon","MKB",35);

   employee1.AskForPromotion();
   employee2.AskForPromotion();

   return 0;
}