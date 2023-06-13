#include <iostream>
#include <vector>
using namespace std;

//function prototype

void print_menu(string name);
void print_list();
void add_item();
void delete_item();

//vector
vector<string>  list;

string name;

int main (int count ,char *args[]){
    
    if(count>1){
        name;
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
   }else if (choice==2){
      add_item();
   } else {
    cout <<"We do not have response for your choice yet"<<endl;
   }
    

}

//Add item

void add_item(){
  cout<<"\n\n\n\n\n\n\n";
  cout<<"** Add a item **\n";

  cout<<"Please Enter Your item and enter ";

  string item;

  cin >> item;

  //push back the item
  list.push_back(item);

  cout<<"Sucessfull add item to list"<<endl;
  cin.clear();

  print_menu(name);

}

//delete a item

void delete_item(){
   
}

void print_list(){

}