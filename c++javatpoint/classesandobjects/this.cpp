#include <iostream>
using namespace std;
class bike{
    public:
        string name;
        int mileage;
        bike(string name,int mileage){
            this->name=name;
            this->mileage=mileage;
        }
        void display(){
            cout<<name<<" "<<mileage<<endl;
        }
};
int main(){
    bike b1("Activa",50);
    bike b2("Access",60);
    b1.display();
    b2.display();
}