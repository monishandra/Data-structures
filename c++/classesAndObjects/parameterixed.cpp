#include <iostream>
using namespace std;
class student{
    public:
        int id;
        string name;
        student(int i,string n){
            id=i;
            name=n;
        }
        void display(){
            cout<<id<<" "<<name<<endl;
        }
};
int main(){
    student s1(1,"andra");
    student s2(2,"monish");
    s1.display();
    s2.display();
}