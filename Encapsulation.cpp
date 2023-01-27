#include<iostream>
using namespace std;

class Account{
private:
    double balance;
    string accName;
    public:
    Account(double ammount,string name){
         balance=ammount;
         accName=name;
         cout<<"Account Name : "<<accName <<endl;
          cout<<"Initial Balance : "<<balance <<endl;
    }

  void deposit(double ammount){
         if(ammount>0){
            balance+=ammount;
         }
  }
  void withdraw(double ammount){
         if(ammount>0 && ammount<balance){
            balance-=ammount;
         }
  }
    double getbalance(){
       return balance;
    }

};

int main(){

  Account a1(5000,"Didarul");
  a1.deposit(20000);
  a1.withdraw(10000);
  cout<<"Current Balance "<<a1.getbalance()<<endl;



}
