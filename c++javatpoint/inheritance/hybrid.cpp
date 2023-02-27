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
class name{
    protected:
        string n="MONISH";
};
class roll:public section,public name{
    int roll=1;
    public:
        void display(){
            cout<<n<<" "<<clss<<" "<<x<<" "<<roll<<endl;
        }
};
int main(){
    roll s1;
    s1.display();
   cout<<s1.x<<endl;
    }