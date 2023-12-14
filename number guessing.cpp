#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
   srand(time(0));
    int x= rand()%100, num;
    cout<<"guess a random number between 0 to 100"<<endl;
     for (int i=0;; i++){
        cin>>num;
        if(num>x)
            cout<<"too high, try again"<<endl;
        if (num<x)
            cout<<"too low, try again"<<endl;
        if (x==num){
            cout<<"congratulations.... you have guessed the number"<<endl;
            break;
        }
     }
     return 0;

}

