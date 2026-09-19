#include<iostream>
#include<string>
using namespace std;
class PiggyBank{
    private:
    string id;
    double savings;
    public:
    PiggyBank(string sid){
        id=sid;
        savings=0;
    }
    void deposite(double amount){
        savings+=amount;
        cout<<id<<"savings:"<<savings<<endl;
    }
    void withdraw(double amount){
        if (amount>0&&amount<=savings)
        {
           savings-=amount;
           cout<<id<<" new savings:"<<savings<<endl;
        }
        else
        {
            cout<<"invalid amount"<<endl;
        }
    }
};
int main(){
    PiggyBank p1("krishna");
    p1.deposite(2000);
    p1.withdraw(500);
    p1.withdraw(3000);
    return 0;
}