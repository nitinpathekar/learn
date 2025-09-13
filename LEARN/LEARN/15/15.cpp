#include <iostream>
using namespace std;
class Que
{
    int start, end;
    int capacity;
    int *arr;

public:
    Que(int val)
    {
        start = -1;
        end = -1;
        capacity = val;
        arr = new int[val];
    }
    int top()
    {
        if (start == -1)
        {
            cout << " qitre empty";
            return -1;
        }
        return arr[start];
    }
    void push(int val){
        if(start==-1){
            start++;
            end++;
            arr[start]=val;
            return ;
        }
        if(start==end && start!=-1){
            end++;
            arr[end]=val;
            return;
        }
        if(end=capacity-1&& start){
            end=0;
            start++;
            arr[end]=val;
            return;
        }
    }
};
int main()
{
    Que var(5);
    var.push(11);
    cout << var.top();
}