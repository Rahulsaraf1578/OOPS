// Wrapping up data and information under a single unit
// Binding together data and functions that manipulate them
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Car{
private:
    string Name;
    string Company;
    int Price;

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

    void setPrice(int price){
        if(price>10000)
        Price = price;
    }

    int getPrice(){
        return Price;
    }

    // Car(string name,string company,int price){
    //     Name = name;
    //     Company = company;
    //     Price = price;
    // }

    void CarIntro(){
        cout<<Name<<endl;
        cout<<Company<<endl;
        cout<<Price<<endl;
    }
};

int main(){
    Car c ;
    c.setName("Lambo");
    c.setCompany("TS");
    c.setPrice(100);
    c.CarIntro();
    return 0;
}