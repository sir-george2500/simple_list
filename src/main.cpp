#include <iostream>
#include "include/list.h"

int main (int count ,char *args[]){

    List simpleList;
    
    if(count>1){
        simpleList.print_menu();
        simpleList.name = string(args[1]);

    }else{
        cout <<"User did now Supplied a argument"<<endl;
    }
    return 0;
}

