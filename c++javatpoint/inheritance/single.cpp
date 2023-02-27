#include <iostream>
using namespace std;
class student{
    public:
        int x=10;
    protected:
        string clss="10th";
};
class section:public student{
        int sec=1;
        public:
        void display(){
            cout<<clss<<" "<<x<<endl;
        }
        
};
int main(){
    section s1;
    s1.display();
   cout<<s1.x<<endl;
    }