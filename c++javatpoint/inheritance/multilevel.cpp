#include <iostream>
using namespace std;
class student{
    public:
        int x=10;
    protected:
        string clss="10th";
};
class section:public student{
    protected:
        int sec=1;
};
class roll:public section{
    int roll=1;
    public:
        void display(){
            cout<<clss<<" "<<x<<" "<<roll<<endl;
        }
};
int main(){
    roll s1;
    s1.display();
   cout<<s1.x<<endl;
    }