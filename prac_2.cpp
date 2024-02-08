#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct employee
{
    int id;
    string name;
    string quali;
    string exp;
    int no;
}s1[1000];

int main()
{
    int i,n,ID,num[1000];
    char a;
    cout<<"enter number of employees"<<" :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"enter employee id:"<<" :";
        cin>>s1[i].id;
        fflush(stdin);
        cout<<"enetr employee name:"<<" :";
        getline(cin,s1[i].name);
        fflush(stdin);
        cout<<"enter qualification"<<" :";
        getline(cin,s1[i].quali);
        fflush(stdin);
        cout<<"enter experience"<<" :";
        getline(cin,s1[i].exp);
        fflush(stdin);
        cout<<"enter contact number"<<" :";
        cin>>s1[i].no;
        fflush(stdin);
    }
    do
    {
        cout<<"enter employe ID to get employ detail"<<" :";
        cin>>ID;
        fflush(stdin);
    
    for(i=0;i<n;i++){
        if (ID==s1[i].id)
        {
            cout<<"------------------------------------------------------"<<endl;
            cout<<left<<setw(20)<<"Name"<<":   "<<s1[i].name<<endl<<endl;
            cout<<left<<setw(20)<<"Qualification"<<":   "<<s1[i].quali<<endl<<endl;
            cout<<left<<setw(20)<<"Experience"<<":   "<<s1[i].exp<<endl<<endl;
            cout<<left<<setw(20)<<"Contact Number"<<":   "<<s1[i].no<<endl<<endl;
            cout<<"------------------------------------------------------"<<endl;
            break;
        } 
    }
        if (i==n)
        {
            cout << "***********";
            cout << "ERROR: ENTERED EMPLOYEE ID DOES NOT EXIST" << endl;
            cout << "***********";
        }
        cout<<"**************************************"<<endl;
        cout<<"press y if you need another employee detail or n for exit"<<" :";
        cin>>a;
        fflush(stdin);
    }while (a=='y'||a=='Y');

    return 0;
}