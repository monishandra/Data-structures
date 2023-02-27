#include <iostream>
using namespace std;
class bike{
    public:
        string name;
        int mileage;
        static float intrest;
        bike(string n,int m){
            name=n;
            mileage=m;
        }
        void display(){
            cout<<name<<" "<<mileage<<" "<<intrest<<endl;
        }
};
float bike::intrest=6.5;
int main(){
    bike b1("Activa",50);
    bike b2("Access",60);
    b1.display();
    b2.display();
}