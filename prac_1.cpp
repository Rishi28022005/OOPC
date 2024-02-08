#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    string student_id, student_name;
    int sem,i,j,gradep[3],gradet[3];
    string sub1,sub2,sub3;
    float sgpa=0;
    string a[3],b[3];
    int marks[3];
    int practical[3];
//all inputs
    cout<<"enter student ID";
    getline(cin,student_id);
    fflush(stdin);
    cout<<"enter student name";
    getline(cin,student_name);
    fflush(stdin);
    cout<<"enter sem";
    cin>>sem;
    fflush(stdin);
    cout<<"enter subject 1 name ";
    getline(cin,sub1);
    fflush(stdin);
    cout<<"enter subject 2 name ";
    getline(cin,sub2);
    fflush(stdin);
    cout<<"enter subject 3 name ";
    getline(cin,sub3);
    fflush(stdin);

    for ( i = 0; i < 3; i++)//input for practical marks 
    {
        cout<<"enter practical marks "<<i;
        cin>>practical[i];
        fflush(stdin);
    }

        for ( j = 0; j < 3; j++)//input for theory marks 
        {
            cout<<"enter marks of theory  "<<j;
            cin>>marks[j];
            fflush(stdin);
        }
        
    
    for ( j = 0; j < 3; j++)//b variable for theory ... gardet for theory
    {
        
            if (marks[j]>=80)
            {
                gradet[j]=10;
                b[j]="AA";
            }
            else if (marks[j]>=73 && marks[j]<80)
            {
                gradet[j]=9;
                b[j]="AB";
            }
            else if (marks[j]>=66 && marks[j]<73)
            {
                gradet[j]=8;
                b[j]="BB";
            }
            else if (marks[j]>=60 && marks[j]<66)
            {
                gradet[j]=7;
                b[j]="BC";
            }
            else if (marks[j]>=55 && marks[j]<60)
            {
                gradet[j]=6;
                b[j]="CC";
            }
            else if (marks[j]>=50 && marks[j]<55)
            {
                gradet[j]=5;
                b[j]="CD";
            }
             else if (marks[j]>=45 && marks[j]<50)
            {
                gradet[j]=4;
                b[j]="DD";
            }
            else
            {
                gradet[j]=0;
                b[j]="FF";
            }
        }
   
        for ( i = 0; i < 3; i++)//a variable for practical .... gardep for practical gardes
        {
            if (practical[i]>=80)
            {
                gradep[i]=10;
                a[i]="AA";
            }
            else if (practical[i]>=73 && practical[i]<80)
            {
                 gradep[i]=9;
                a[i]="AB";
            }
            else if (practical[i]>=66 && practical[i]<73)
            {
                 gradep[i]=8;
                a[i]="BB";
            }
            else if (practical[i]>=60 && practical[i]<66)
            {
                 gradep[i]=7;
                a[i]="BC";
            }
            else if (practical[i]>=55 && practical[i]<60)
            {
                 gradep[i]=6;
                a[i]="CC";
            }
            else if (practical[i]>=50 && practical[i]<55)
            {
                 gradep[i]=5;
                a[i]="CD";
            }
             else if (practical[i]>=45 && practical[i]<50)
            {
                 gradep[i]=4;
                a[i]="DD";
            }
            else
            {
                 gradep[i]=0;
                a[i]="FF";
            }
        }
    //sgpa=credit*grade/sum of credits
    for ( i = 0; i < 3; i++)
    {
        sgpa +=(float)4*gradep[i]+(float)4*gradet[i];
    }
    sgpa=sgpa/24;//dividing sgpa by sum of cerdits
    

    cout<<"----details-----"<<endl;
    cout<<"Student ID"<<setw(10)<<":   "<<student_id<<endl;
    cout<<"Student name"<<setw(8)<<":   "<<student_name<<endl;
    cout<<"semester"<<setw(12)<<":   "<<sem<<endl;
    cout<<setw(45)<<"Thoery" <<setw(13) <<"Practcal"<<endl;
    cout<<left<<setw(30)<<sub1<<right<<setw(13)<<b[0]<<right<<setw(13)<<a[0]<<endl;
    cout<<left<<setw(30)<<sub2<<right<<setw(13)<<b[1]<<right<<setw(13)<<a[1]<<endl;
    cout<<left<<setw(30)<<sub3<<right<<setw(13)<<b[2]<<right<<setw(13)<<a[2]<<endl;
    cout<<"SGPA"<<setw(16)<<":   "<<setprecision(2)<<sgpa;
    return 0;
}