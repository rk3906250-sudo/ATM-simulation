#include <iostream>
using namespace std;
class ATM{
    private:
      int pin;
      float balance;
    public:
      void set(int p,float b){
          pin=p;
          balance=b;
      }
      bool checkpin(int p){
         return pin==p;
      }
      void showbalance(){
        cout<<"balance:"<<balance<<endl;
      }
      void deposit(int amount){
        balance=balance+amount;
        cout<<"after deposit your balance is:"<<balance<<endl;
        cout<<"your decision in depositing "<<amount<<" is just WOW!"<<endl;
      }
      void withdrawal(int amount){
        if(amount<=balance){
            balance=balance-amount;
            cout<<"withdrawal sucessfully"<<endl;
            int c=balance;
            cout<<"remaining balance:"<<c<<endl;
        }
        else{
            cout<<"insufficient balance !"<<endl;
        }
        if(balance==5000){
            cout<<"wow now your balance is same as initial balance";
        }
      }
};
int main(){
    
    ATM a1;
    int pin;
    float amount;
    a1.set(2710,5000);
    cout<<"enter your pin:"<<endl;
    cin>>pin;
    
    if(a1.checkpin(pin)){
       cout<<"successfully login"<<endl;
       a1.showbalance();
       cout<<"how much you want to deposit"<<endl;
       cin>>amount;
       a1.deposit(amount);
    
       cout<<"how much you want to withdraw"<<endl;
       cin>>amount;
       a1.withdrawal(amount);

    }
    else
     cout<<"login failed! try again";
}