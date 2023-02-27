#include <iostream>
using namespace std;
class over{
    public:
        void fun(int a){
            cout<<a<<endl;
        }
        void fun(double a){
            cout<<a<<endl;
        }
        void fun(int a,int b){
            cout<<a<<" "<<b<<endl;
        }
};
int main(){
    over o1;
    
    o1.fun(10);
    o1.fun(11.5);
    o1.fun(1,2);
}