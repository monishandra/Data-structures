#include <iostream>
using namespace std;
class bike{
    public:
        string name;
        int mileage;
        bike(string n,int m){
            name=n;
            mileage=m;
        }
        bike(bike &i){
            name=i.name;
            mileage=i.mileage;
        }
        void display(){
            cout<<name<<" "<<mileage<<endl;
        }
};
int main(){
    bike b1("Activa",50);
    bike b2(b1);
    b1.display();
    b2.display();
}