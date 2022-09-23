// Function with same name but different number of arguments or different types of arguments

#include <bits/stdc++.h>
using namespace std;

class Add{
public:
    int a;
    int b;

    void sum(int a,int b){
        cout<<a+b<<endl;
    }

    void sum(double a,double b){
        cout<<a+b<<endl;
    }
};

int main(){
    Add a;

    a.sum(2,3);
    a.sum(2.0,4.0);
}