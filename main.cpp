int main()
{
Student objstu;
course objcou;
faculity objfac;
academia objadm;
ofstream write;
ifstream read,read1,read2,read3;
int main_choice,newmember_choice;
string a,temp1,a1,var,student1;
int student=0;
int faculity_count=0;
int academia_count=0;
int student_count=0;
int temp2=0;
int data_count=0;
int student4=0;
int teacher4=0;
int acdemia4=0;int student3=0;
int teacher3=0;
int acdemia3=0;
//////////////////////////////
read.open("user.dat");
while(!read.eof())
{
getline(read,temp1);
int length3=temp1.length();
string str;
int c=0;
for(int i=0;i<length3;i++)
{
if(temp1[i]=='['||temp1[i]==']')
{
c++;
}
else if(c==7)
{
str+=temp1[i];
}
}
if(str=="student")
{
student_count++;
}
else if(str=="faculity")
{
faculity_count++;
}
else if(str=="academia")
{
academia_count++;
}
}
read.close();
///////////////////////////////
string *student_data=new string[student_count];
string *faculity_data=new string [faculity_count];
string *academia_data=new string [academia_count];
Student *studentbreak=new Student[student_count];
faculity *faculitybreak=new faculity[faculity_count];
academia *academiabreak=new academia[academia_count];
/////////////////////
read1.open("user.dat");
while(getline(read1,var))
{
int length1=var.length();
string str;
int c=0;
for(int i=0;i<length1;i++)
{
if(var[i]=='['||var[i]==']')
c++;
else if(c==7)
{
str+=var[i];}
}
if(str=="student")
{
student_data[student3]=var;
student3++;
}
else if(str=="faculity")
{
faculity_data[+teacher3]=var;
teacher3++;
}
else if(str=="academia")
{
academia_data[acdemia3]=var;
acdemia3++;
}
}
read1.close();
////////////////////////////////////////////////
read2.open("user.dat");
while(getline(read2,var))
{
int length2=var.length();
string str;
int c=0;
for(int i=0;i<length2;i++)
{
if(var[i]=='['||var[i]==']')
c++;
else if(c==7)
{
str+=var[i];
}
}
if(str=="student")
{
c=0;
string stuser,stnam,stpass,ststatus,stcourses;
for(int i=0;i<length2;i++)
{
if(var[i]=='['||var[i]==']')
c++;
else if(c==1)
{
stuser+=var[i];
}
else if(c==3)
{
stnam+=var[i];
}
else if(c==5)
{
stpass+=var[i];
}
else if(c==7)
{ststatus+=var[i];
}
else if(c==9)
{
stcourses+=var[i];
} }
studentbreak[student4].setstudentid(stuser);
studentbreak[student4].setstudentname(stnam);
studentbreak[student4].setuser_password(stpass);
studentbreak[student4].setStatus(ststatus);
student4++;
}
else if(str=="faculity")
{
int c2=0;
string fauser,fanam,fapass,fastatus,facourses;
int length4=var.length();
for(int i=0;i<length4;i++)
{
if(var[i]=='['||var[i]==']')
c2++;
else if(c2==1)
{
fauser+=var[i];
}
else if(c2==3)
{
fanam+=var[i];
}
else if(c2==5)
{
fapass+=var[i];
} }
faculitybreak[teacher4].setuser_id(fauser);
faculitybreak[teacher4].setuser_name(fanam);
faculitybreak[teacher4].setuser_password(fapass);
teacher4++;
}
else if(str=="academia")
{
c=0;
string acuser,acnam,acpass,acstatus,accourses;
for(int i=0;i<length2;i++)
{
if(var[i]=='['||var[i]==']')
c++;
else if(c==1)
{
acuser+=var[i];
}
else if(c==3)
{
acnam+=var[i];
}else if(c==5)
{
acpass+=var[i];
} }
academiabreak[acdemia4].setuser_id(acuser);
academiabreak[acdemia4].setuser_name(acnam);
academiabreak[acdemia4].setuser_password(acpass);
acdemia4++;
}
}
read2.close();
string loginstatus;
string loginid;
string loginpassword;
bool check=false;
bool Studentcheck=false;
bool faculitycheck=false;
bool academiacheck=false;
do
{
cout<<"-------------------WELOCME TO THE LEARNING MANAGMENT SYSTEM------------"<<endl;
cout<<"------------------------------LOGIN MENU-------------------------------"<<endl;
cout<<"enter the user id :";
getline(cin,loginid);
cout<<"enter the user password:";
getline(cin,loginpassword);
for(int i=0;i<student_count;i++)
{
if(studentbreak[i].getstudentid()==loginid &&
studentbreak[i].getuser_password()==loginpassword&&studentbreak[i].getStatus()=="student"
)
{
Studentcheck= true;
break;
}
else
{
cout<<"user not found"<<endl;
}
}
for(int i=0;i<faculity_count;i++)
{
if(faculitybreak[i].getfaculityid()==loginid && faculitybreak[i].getuser_password()==loginpassword&&studentbreak[i].getStatus()=="faculity")
{
faculitycheck= true;
break;
} }
for(int i=0;i<academia_count;i++)
{if(academiabreak[i].getuser_id()==loginid && academiabreak[i].getuser_password()==loginpassword&&studentbreak[i].getStatus()=="academia")
{
academiacheck= true;
} }
}
while(Studentcheck!=false&&academiacheck!= false&&faculitycheck!=false);
system("cls");
do
{
cout<<"---------------------LEARNING MANAGMENT SYSTEM ------------------------------"<<endl;
cout<<"1 enter the new member (student /academia/faculity)"<<endl;
cout<<"2 create courses"<<endl;
cout<<"3 assign the courses to teacher"<<endl;
cout<<"4 assign students to the teacher"<<endl;
cout<<"5 search the student "<<endl;
cout<<"6 search the academia"<<endl;
cout<<"7 search the faculity"<<endl;
cout<<"8 view the data"<<endl;
cout<<"9 to exit"<<endl;
cin>>main_choice;
system("cls");
if(main_choice==1)
{
do
{
cout<<"1 ENTER THE DATA OF THE STUDENT "<<endl;
cout<<"2 ENTER THE DATA OF THE TEACHER"<<endl;
cout<<"3 ENTER THE NEW ADMIN PERSON"<<endl;
cout<<"4 ENTER TO EXIT"<<endl;
cin>>newmember_choice;
system("cls");
if(newmember_choice==1)
{
input(objstu);
}
else if(newmember_choice==2)
{
input1( objfac);
}
else if(newmember_choice==3)
{
input2(objadm);
}
}
while(newmember_choice!=4);
}
else if(main_choice==2)
{
input3(objcou);
}
else if(main_choice==3)
{////////////
string nam;
cout << "Enter teacher name: ";
cin >> nam;
int pos = 0, index = 0;
string str;
read.open("teacher.dat");
while (getline(read, str))
{
++pos;
}
read.close();
string *arr1 = new string[pos];
read.open("teacher.dat");
while (getline(read, str))
{
arr1[index] = str;
++index;
}
read.close();
string *arr2 = new string[pos];
for (int i = 0; i < pos; i++)
{
int t = 0;
int len = arr1[i].length();
for (int j = 0, k = 0; j <
len; j++, k++)
{
if (arr1[i][j] !=
'[' && arr1[i][j] != ']' && (t == 2 || t == 1))
{
arr2[i] +=
arr1[i][j];
}
else
t++;
}
}
int ins = 0;
for (int j = 0; j <pos; j++)
{
if (arr2[j] == nam)
{
ins = j;
}
}
int rr = arr1[ins].length();
int tr = 0;
string ww;
for (int i = 0; i < rr; i++)
{
if (arr1[ins][i] == '[' ||
arr1[ins][i] == ']'){
tr++;
}
if (tr == 5)
{
tr++;
i = i + 1;
}
if (tr == 6)
{
ww += arr1[ins][i];
}
}
string j;
int lsize = 0, l = 0;
int len = ww.length();
for (int i = 0; i < len; i++)
{
toupper(ww[i]);
}
read.open(ww + ".dat");
while (getline(read, j))
{
lsize++;
}
read.close();
string *ary = new string[lsize];
read.open(ww + ".dat");
while (getline(read, j))
{
ary[l] = j;
l++;
}
read.close();
int op;
//cout << "courses is" << endl;
for (int i = 0; i < lsize; i++)
{
cout << i + 1 << ". " <<
ary[i] << endl;
}
cout << "Enter course. " << endl;
cin >> op;
int le = ary[op - 1].length();
int y = 0;
string r;
for (int i = 0; i < le; i++)
{
if (ary[op - 1][i] == '['
|| ary[op - 1][i] == ']')
{
y++;
}
if (y == 3)
{
y++;
i = i + 1;}
if (y == 4)
{
r += ary[op - 1][i];
}
}
string q;
fstream ffin;
char a;
ffin.open(r + ".dat");
while (ffin.get(a))
{
q += a;
}
ffin.close();
write.open(r + ".dat");
q += "[" + arr2[ins] + "]";
cout << q << endl;
write << q;
write.close();
/////////////
}
else if(main_choice==4)
{ }
else if(main_choice==5)
{
int student_choice;
do
{
cout<<"1 search the student by name"<<endl;
cout<<"2 search the student by id "<<endl;
cout<<"3 to exit "<<endl;
cin>>student_choice;
system("cls");
if(student_choice==1)
{
string nameofstudent;
cout<<"enter the name of the student to search"<<endl;
cin>>nameofstudent;
for(int i=0;i<student4;i++)
{
if(studentbreak[i].getstudentname()==nameofstudent)
{
cout<<student_data[i]<<endl;
}
}
}
else if(student_choice==2)
{
string idofstudent;
cout<<"enter the name of the student to search"<<endl;
cin>>idofstudent;
for(int i=0;i<student4;i++){
if(studentbreak[i].getstudentname()==idofstudent)
{
cout<<student_data[i]<<endl;
}
}
}
else
{
cout<<"wrong input"<<endl;
}
}
while(student_choice!=3);
}
else if(main_choice==6)
{
int academia_choice;
do
{
cout<<"1 search the academia by name"<<endl;
cout<<"2 search the academia by id "<<endl;
cout<<"3 to exit "<<endl;
cin>>academia_choice;
system("cls");
if(academia_choice==1)
{
string nameofacademia;
cout<<"enter the name of the academia to search"<<endl;
cin>>nameofacademia;
for(int i=0;i<acdemia4;i++)
{
if(academiabreak[i].getuser_name()==nameofacademia)
{
cout<<academia_data[i]<<endl;
}
}
}
else if(academia_choice==2)
{
string idofacademia;
cout<<"enter the id of the academia to search"<<endl;
cin>>idofacademia;
for(int i=0;i<acdemia4;i++)
{
if(academiabreak[i].getuser_id()==idofacademia)
{
cout<<academia_data[i]<<endl;
}
}
}
else
{
cout<<"wrong input"<<endl;
}
}
while(academia_choice!=3);}
else if(main_choice==7)
{
int faculity_choice;
do
{
cout<<"1 search the faculity by name"<<endl;
cout<<"2 search the faculity by id "<<endl;
cout<<"3 to exit "<<endl;
cin>>faculity_choice;
system("cls");
if(faculity_choice=1)
{
string nameoffaculity;
cout<<"enter the name of the faculity to search"<<endl;
cin>>nameoffaculity;
for(int i=0;i<teacher4;i++)
{
if(faculitybreak[i].getuser_name()==nameoffaculity)
{
cout<<faculity_data[i]<<endl;
}
}
}
else if(faculity_choice==2)
{
string idoffaculity;
cout<<"enter the name of the faculity to search"<<endl;
cin>>idoffaculity;
for(int i=0;i<teacher4;i++)
{
if(faculitybreak[i].getuser_name()==idoffaculity)
{
cout<<faculity_data[i]<<endl;
}
}
}
}
while(faculity_choice!=3);
}
else if (main_choice==8)
{
int view_choice1;
do
{
cout<<"1 to view the data of the student"<<endl;
cout<<"2 to view the data of the faculity"<<endl;
cout<<"3 to view the data of the academia"<<endl;
cout<<"4 to exit"<<endl;
cin>>view_choice1;
system("cls");
if(view_choice1==1)
{
cout<<"THE DATA OF THE STUDENT IS"<<endl;
for (int i=0;i<student_count;i++)
{
cout<<student_data[i]<<endl;
}}
else if(view_choice1==2)
{
cout<<"THE DATA OF THE teacher IS"<<endl;
for (int i=0;i<student_count;i++)
{
cout<<faculity_data[i]<<endl;
}
}
else if(view_choice1==3)
{
cout<<"THE DATA OF THE ACADEMIA IS"<<endl;
for (int i=0;i<student_count;i++)
{
cout<<academia_data[i]<<endl;
}
}
}
while(view_choice1!=4);
}
}
while(main_choice!=9);
system("pause");
}
void input(Student &objstu)
{
ofstream write;
cout << "enter the name of the student :" << endl;
cin >>objstu.user_name;
cin.ignore();
cout << "enter the batch of student(two characters)" << endl;
cin >> objstu.student_batch;
cout << "enter the id of student(three characters)" << endl;
cin >> objstu.user_id;
cout<<"enter the student password"<<endl;
cin.ignore();
getline(cin,objstu.user_password);
cout<<"enter the course you want to pick";
for(int i=0;i<5;i++)
{
cin>>objstu.courseregistered[i];
cout<<endl;
}
/*cin>>objstu.courseregistered[1];
cout<<endl;
cin>>objstu.courseregistered[2];
cout<<endl;
cin>>objstu.courseregistered[3];
cout<<endl;
cin>>objstu.courseregistered[4];
cout<<endl*/;
write.open("user.dat",ios::app);
write<<"["<<objstu.student_batch<<"-"<<objstu.user_id<<"]"<<"["<<objstu.user_name<<"]"<<"["<<objstu.user_password<<"]"<<"[student]"<<"[";for(int i=0;i<5;i++)
{
write<<objstu.courseregistered[i]<<",";
}
write<<"]"<<endl;
write.close();
}
