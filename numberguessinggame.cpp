#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int randomnumber=rand() %100+1;
    int userguess=0;
    int attempt=0;


    cout<<" welcome to number guessing game .."<<endl;
    cout<<" i have 1 to 100  random number to  guessing"<<endl;
    cout<<" can you guess  it"<<endl;

    while(userguess !=randomnumber){
        cout<<" Enter your number"<<endl;
        cin>>userguess;
        attempt++;

        if(userguess<randomnumber){
            cout<<"is too low ! please try again"<<endl;
        }
        else if(userguess>randomnumber){
            cout<<" is too high !  please try again"<<endl;

        }
        else{
            cout<<"  well done  ! you have guess correct nuber"<<endl;

        }
    }
    return 0;



}
