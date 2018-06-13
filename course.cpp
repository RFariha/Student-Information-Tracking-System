class course
{
protected:
    string course_name;
    string course_id;
    string course_faculity;
public:
    course()
    {
        course_name=course_id=course_faculity="";
    }
    ~course() {}
    void setcoursename( string cn)
    {
        course_name=cn;
    }
    void setcourseid( string ci)
    {
        course_id=ci;
    }
    void setcoursefaculity( string cf)
    {
        course_name=cf;
    }
    string getcoursename()
    {
        return course_name;
    }
    string getcourseid()
    {
        return course_id;
    }
    string getcoursefaculity()
    {
        return course_faculity;
    }
    friend void input3(course &objcou);
};
