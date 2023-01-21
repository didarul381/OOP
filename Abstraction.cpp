#include<iostream>
using namespace std;
class Calculator
{

private:
    int n1,n2;//private data member abstraction

    //private member function
    void setValue()
    {
        cout<<"Enter first number:";
        cin>>n1;
        cout<<"Enter second number:";
        cin>>n2;

    }
public:
    getSum()
    {
        setValue();
        cout<<n1+n2<<endl;
    }
    getSub()
    {
        setValue();
        cout<<n1-n2<<endl;
    }
    getMultiple()
    {
        setValue();
        cout<<n1*n2<<endl;
    }
    getDiv()
    {
        setValue();
        cout<<n1/n2<<endl;
    }

};

int main()
{
    Calculator obj;

    int choice;
    cout<<"1.Sum\t2.Sub\t3.Multi\t4.Div\n***---------------------------***"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        obj.getSum();
        break;
    case 2:
        obj.getSub();
        break;
    case 3:
        obj.getMultiple();
        break;
    case 4:
        obj.getDiv();
        break;
    default:
        cout<<"Invalid Choice";


    }
}
