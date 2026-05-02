#include <iostream>

int main() {
    // USEFUL STRINGS METHOD
std::string name ;

std::cout<< "enter your name " << std::endl;

std::getline(std::cin,name);

if(name.length()>12) {
    
std::cout<<"your name cant be over 12 characters"<<std::endl;

 }
   else{
       
    std::cout<<"welcome "<< name;
   }
   
    return 0;
}