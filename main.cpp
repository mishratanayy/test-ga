#include "user.h"
#include <memory>
#include <iostream>

using namespace std;

int main(int argc,char** argv){
    std::unique_ptr<User> user;
    if(argc == 1){ 
        user = std::make_unique<User>();
    } else{
        if(argc != 4){
            throw std::runtime_error("Invalid number of arguments");
        } else {
            user = std::make_unique<User>(atoi(argv[1]),argv[2],argv[3]);
        }
    }
    std::cout << "User id: " << user->getId() << std::endl;
    std::cout << "User name: " << user->getName() << std::endl;
    std::cout << "User email: " << user->getEmail() << std::endl;
    return 0;
}