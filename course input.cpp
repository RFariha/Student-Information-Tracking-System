void input3(course &objcou)
{
    ofstream write,out;
    cout << "ENTER A COURSE code" << endl;
    cin >> objcou.course_id;
    cout << "ENTER the name of course" << endl;
    cin.ignore();
    getline( cin,objcou.course_name);
    cout<<"ENTER THE FACULITY ASSIGNED"<<endl;
    getline(cin,objcou.course_faculity);
    write.open("course.dat");
    write<<"["<<objcou.course_id<<"]"<<"["<<objcou.course_name<<"]"<<endl;
    write.close();
    write.open(objcou.course_name +".dat");
    write<<"["<<objcou.course_name<<"]"<<"["<<objcou.course_faculity<<"]"<<endl;
}
