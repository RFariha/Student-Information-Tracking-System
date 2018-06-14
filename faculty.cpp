
class faculity:public user
{
protected:
    string faculity_name;
    string faculity_id;
    string courseinstructor[5];
//Student *studentregistered;
public:
    faculity()
    {
        faculity_name=faculity_id="";
    }
    ~faculity() {}
    void setfaculityid(string fi)
    {
        faculity_id=fi;
    }
    void setfaculityname(string fn)
    {
        faculity_name=fn;
    }
    string getfaculityid()
    {
        return faculity_id;
    }
    string getfaculityname()
    {
        return faculity_name;
    }
    friend void input1(faculity objfac);
};
