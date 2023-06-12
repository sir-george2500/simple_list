#include <iostream>
using namespace std;

//function prototype

void print_menu(string name);

int main (int count ,char *args[]){
    
    if(count>1){
        string name;

        print_menu(name);

    }else{
        cout <<"User did now Supplied a argument"<<endl;
    }
    return 0;
}



void print_menu(string name) {

    int choice;
    cout<<"*************************************"<<endl;
    cout<<"1 - Print list.\n";
    cout<<"2 - Print add to List\n";
    cout<<"3 - Print delete from List\n";
    cout<<"4 - Quit out of the program\n";
    cout <<"Enter Your Choice to Continue ";


   //ask the user for input

   cin>> choice;

   if(choice == 4){
    exit(0);
   }else {
    cout <<"We do not have response for your choice yet"<<endl;
   }
    

}