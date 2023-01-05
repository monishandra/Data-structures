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
        student(student &i){
            id=i.id;
            name=i.name;
        }
        void display(){
            cout<<id<<" "<<name<<endl;
        }
};
int main(){
    student s1(1,"andra");
    student s2(s1);
    s1.display();
    s2.display();
}