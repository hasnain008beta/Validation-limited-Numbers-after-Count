

/* i made this on code blocks
   number range (1-5) and you have 5 choice of numbers to enter
   after that you get points i manually assign points 5 assign at declaration stage
   by own
*/


#include<iostream>
using namespace std;
int main(){
      int ask , coun = 0;
    cout<<"\t\t\t Welcome the Validation Numbers Range "<<endl;
    for(int a = 1 ; a<=5 ; a++){ // iteration from -> 1 , till -> 5
    if(a>=1 && a<=5){

      cout<< "Enter value less than 5 " <<endl;
      cin>> ask;

      if(ask<=5){

        cout<<"Status : Valid"<<endl;
      //  valid number count
        coun = coun + ask;


      }else{
        cout<<"Status : inValid only range (1-5)"<<endl;
           break;
      }
    }else{
      cout<<"You Exceed... no more ask"<<endl;

        }

    }

       cout<< "total number " << coun <<endl;
      return 0;

    }


