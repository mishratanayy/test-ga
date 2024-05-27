#include "user.h"
#include <iostream>

User::User(){
    m_id = 7;
    m_name = getenv("USER");
    if(m_name.empty()){
        std::cout << "USER environment variable not set " << std::endl;
        m_name = "Unknown user";
    } 
    m_email = "random-email@org";
}

User::User(int id, std::string name, std::string email){
    m_id = id;
    m_name = name;
    m_email = email;
}

void User::setId(int id){
    m_id = id;
}

void User::setName(const std::string& name){
    m_name = name;
}

void User::setEmail(const std::string& email){
    m_email = email;
}

int User::getId() const {
    return m_id;
}

std::string User::getName() const {
    return m_name;
}

std::string User::getEmail() const {
    return m_email;
}


