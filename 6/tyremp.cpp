#include <iostream>
using namespace std;
class Udata
{
    public:
    int data;
    char ch;
    public:
    Udata(int val){
        data=val;
    }
};
 int main()
{
    Udata* var=new Udata(4);
    cout<<var->data;
}