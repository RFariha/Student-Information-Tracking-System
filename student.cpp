class Student :public user
{
protected:
    string student_batch;
    string student_id ;
    string courseregistered[5];
public:
    Student()
    {
        student_batch=student_id="";
    }
    ~Student() {}
    void setstudentname(string cn)
    {
        student_batch=cn;
    }
    void setstudentid(string ci)
    {
        student_id=ci;
    }
    string getstudentname()
    {
        return student_batch;
    }
    string getstudentid()
    {
        return student_id;
    }
    friend void input(Student &stuobj);
};
