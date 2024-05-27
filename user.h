#pragma once 
#include <string>
class User{
    public:
        User();
        User(int id, std::string name, std::string email);
        void setId(int id);
        void setName(const std::string& name);
        void setEmail(const std::string& email);
        int getId() const ;
        std::string getName() const ;
        std::string getEmail() const;
    private:
        int m_id;
        std::string m_name;
        std::string m_email;
};