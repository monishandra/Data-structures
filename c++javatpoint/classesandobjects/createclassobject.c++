#include <iostream>
using namespace std;
class bike{
    public:
        string name;
        int mileage;
        void insert(string n,int m){
            name=n;
            mileage=m;
        }
        void display(){
            cout<<name<<" "<<mileage<<endl;
        }
};
int main(){
    bike b1;
    bike b2;
    b1.insert("Activa",50);
    b2.insert("Access",60);
    b1.display();
    b2.display();
}