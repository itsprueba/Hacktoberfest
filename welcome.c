#include<fstream.h>
#include<conio.h>
#include<stdio.h>

class EMPLOYEES
{
         int EmployeeCode;
         char EmployeeName[20];
         char Designation[20];
         char Division [20];
public:
         void GetData1();
         void PutData1();
         int getEcode1();
};
void EMPLOYEES ::GetData1()
{
         cout<<"enter Employee's Code";
         cin>>EmployeeCode;
         cout<<"enter Employee's Name";
         gets(EmployeeName);
         cout<<"Enter Employee's Designation";
         gets(Designation);
         cout<<"enter employee's Division";
         gets(Division);
}
void EMPLOYEES:: PutData1()
{
         cout<<EmployeeCode<<"\t"<<EmployeeName<<"\t"<<Designation<<"\t"<<Division<<endl;
}
int EMPLOYEES:: getEcode1()
{
         return(EmployeeCode);
}
EMPLOYEES E;
void main()
{
clrscr();
int c;
void enteremployee();
void displayemployee();
void searchemployee();
void modifyemployee();
void deleteemployee();
            do
            {
            cout<<"\n main menu"<<endl;
            cout<<"1.Enter Employee details"<<endl;
            cout<<"2.Display Employee details"<<endl;
            cout<<"3.Search Employee Details"<<endl;
            cout<<"4.Modify Employee Details"<<endl;
            cout<<"5.Delete Employee Details"<<endl;
            cout<<"6.want to exit"<<endl;
            cout<<"enter your choice";
            cin>>c;
                            switch(c)
                            {
                                 case 1: enteremployee();
                            break;
                                 case 2: displayemployee();
                            break;
                                 case 3: searchemployee();
                            break;
                                 case 4: modifyemployee();
                            break;
                                 case 5: deleteemployee();
                            break;
                            }
             }while(c!=6);
getche();
}
void enteremployee()
{
             ofstream afile("champ.dat",ios::binary|ios::app);
             E.GetData1();
             afile.write((char*)& E, sizeof(E));
             afile.close();
cout<<endl;
getche();
}
void displayemployee()
{
             ifstream bfile("champ.dat",ios::binary);
             while(bfile.read((char*)& E, sizeof(E)))
             {
             E.PutData1();
             }
             bfile.close();
cout<<endl;
getche();
}
void searchemployee()
{
             int p=-1,z;
             ifstream cfile("champ.dat",ios::binary);
             cout<<"please enter the employee code to be searched:\n";
             cin>>z;
                      while(cfile.read((char*)& E,sizeof(E)))
                      {
                                 if(E.getEcode1()==z)
                                 {
                                 E.PutData1();
                                 p++;
                                 }
                      }
                      if(p==-1)
                      cout<<"sorry!record not found\n";
cout<<endl;
                      cfile.close();
getche();
}
void modifyemployee()
{
              int g=-1,a=0,t;
              cout<<"please enter the employee code to be modified:\n";
              cin>>t;
              fstream dfile("champ.dat",ios::in|ios::binary|ios::out );
                          while(dfile.read((char*)& E, sizeof(E)))
                          {
                          a++;
                                  if(E.getEcode1()==t)
                                  {
                                  E.GetData1();
                                  dfile.seekp((a-1)*sizeof(E),ios::beg);
                                  dfile.write((char*)& E, sizeof(E));
                                  g++;
                                  }
                           }
                           if(g==-1)
                           cout<<"sorry record not found\n";
                           dfile.close();
cout<<endl;
getche();
}
void deleteemployee()
{
               int b;
               ifstream efile("champ.dat",ios::binary);
               ofstream ffile("bigchamp.dat",ios::binary);
               cout<<"please enter the employee code to be deleted\n";
               cin>>b;
                           while(efile.read((char*)& E, sizeof(E)))
                           {
                                   if(E.getEcode1()!=b)
                                   {
                                   ffile.write((char*)& E,sizeof(E));
                                   }
                           }
remove("champ.dat");
rename("bigchamp.dat","champ.dat");
efile.close();
ffile.close();
cout<<endl;
getche();
}


