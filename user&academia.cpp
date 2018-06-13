#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std;
class user
{
protected:
    string user_name;
    string user_id ;
    string user_password;
    string status;
public:
    user()
    {
        user_name= user_id =user_password="";
    }
    ~user() {}
    void setuser_name(string un)
    {
        user_name=un;
    }
    void setuser_id(string ui)
    {
        user_id=ui;
    }
    void setuser_password(string up)
    {
        user_password=up;
    }
    void setStatus(string v)
    {
        status=v;
    }
    string getStatus()
    {
        return status;
    }
    string getuser_name()
    {
        return user_name;
    }
    string getuser_id()
    {
        return user_id;
    }
    string getuser_password()
    {
        return user_password;
    }
};


class academia:public user
{
    friend void input2(academia &objac);
};
