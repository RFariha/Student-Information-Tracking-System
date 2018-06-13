void input2(academia &objac)
{
    ofstream write;
    cout<<"enter the name of the member as admin"<<endl;
    getline(cin,objac.user_name);
    cout<<"Assign the unique id of the member"<<endl;
    getline(cin,objac.user_id);
    cout<<"enter the password for the member"<<endl;
    getline(cin,objac.user_password);
    write.open("user.dat",ios::app);
    write<<"["<<objac.user_id<<"]"<<"["<<objac.user_name<<"]"<<"["<<objac.user_password<<"]"<<"[academia]"<<endl;
    write.close();
}
