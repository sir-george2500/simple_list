#include "include/list.h"

//member function of the class List
void List::print_menu() {

    int choice;
    cout<<"*************************************"<<endl;
    cout<<"1 - Print list.\n";
    cout<<"2 - Print add to List\n";
    cout<<"3 - Print delete from List\n";
    cout<<"4 - Quit out of the program\n";
    cout <<"Enter Your Choice to Continue ";


   //ask the user for input

   cin>> choice;



   switch (choice) {
    case 4:
        exit(0);
        break;
    case 1:
        print_list();
        break;
    case 2:
        add_item();
        break;
    default:
        cout << "We do not have a response for your choice yet" << endl;
        break;
    }

    

}

//Add item

void  List::add_item(){
  cout<<"\n\n\n\n\n\n\n\n";
  cout<<"** Add a item **\n";

  //enter your name;

  cout<<"Please Enter Your item and enter ";

  string item;

  cin >> item;

  //push back the item
  list.push_back(item);

  cout<<"Sucessfull add item to list"<<endl;
  cin.clear();

  print_menu();

}

//delete a item

void List::delete_item(){
   
}

void List::print_list(){
  //check if the user have something in their list first 

  if(list.size()){
    //if they do then print it out 
    cout <<"Here is your list of item"<<endl;
    for(int i = 0; i< (int) list.size();i++){
        cout<<list[i]<<endl;
    }
        
    }else{
        cout << "The is list empty";
        //call the add item 
        add_item();
    }


  }

