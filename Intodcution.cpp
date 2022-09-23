#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Introduction{
public:
    string gender;

    void greet(string name){
        cout<<"Hi "<<name<<endl;
    }

    void genderP(){
        cout<< gender<<endl;
    }

};

int main(){
    Introduction i ;
    i.greet("Rahul");
    i.gender = "M";
    i.genderP();
    
}