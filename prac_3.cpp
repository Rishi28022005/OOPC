#include<iostream>
#include<string>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class car
{
    //class contains 2 section public and private 
    private:
    string model,fuel,transmission,air;
    int air_num;
    float price;
    float mileage;
    float tank_capacity;
    int seats;
    //public section inside class contains user defined functions as well
    public:
    int fuel_no;
    float showroom_price;
    //taking all the inputs here for car (this function is called inside main)
    void getdata()
    {
        cout<<"enter model name :"<<endl;
        getline(cin,model);
        fflush(stdin);
        cout<<"enter showroom price(lakhs) :"<<endl;
        cin>>price;
        fflush(stdin);
        cout<<"enter mileage :"<<endl;
        cin>>mileage;
        fflush(stdin);
        cout<<"enter fuel type(1=petrol,2=desiel,3=electric,4=cng) :"<<endl;
        cin>>fuel_no;
        fflush(stdin);
        switch (fuel_no)//switch to store fuel value 
        {
        case 1:
        fuel="petrol";
            break;
            case 2:
        fuel="desiel";
            break;
            case 3:
        fuel="electric";
            break;
            case 4:
        fuel="cng";
            break;
        
        default:
            break;
        }
        cout<<"enter tank capacity :"<<endl;
        cin>>tank_capacity;
        fflush(stdin);
        cout<<"enter seating :"<<endl;
        cin>>seats;
        fflush(stdin);
        cout<<"enter air bag(1=yes or 2=no) :"<<endl;
        cin>>air_num;
        fflush(stdin);
        switch (air_num)
        {
        case 1:
                air="yes";
            break;
        case 2:
                air="no";
                break;
        default:
            break;
        }
        cout<<"enter transmission (ATM or manual) :"<<endl;
        getline(cin,transmission);
        fflush(stdin);
    }
    //function used to display model names for option 1
    void display_modelname()
    {
        cout<<model<<"\t\t";
    }
    //below function used to display details for opt 1,2&3
    void display_detail()
    {
        cout<<left<<setw(9)<<"Model"<<right<<setw(8)<<"Fuel"<<right<<setw(8)<<"Price"<<right<<setw(11)<<"Mileage"<<right<<setw(15)
        <<"Transmission"<<right<<setw(16)<<"Tank capacity"<<right<<setw(10)<<"Seating"<<right<<setw(11)<<"Airbags\n";
        cout<<right<<setw(26)<<"(Lakhs)"<<right<<setw(9)<<"(km/L)"<<right<<setw(29)<<"(Liters)"<<right<<setw(15)
        <<"Capacity\n"; 
        cout<<left<<setw(9)<<model<<right<<setw(10)<<fuel<<right<<setw(5)<<showroom_price<<right<<setw(9)<<mileage<<right
        <<setw(14)<<transmission<<right<<setw(13)<<tank_capacity<<right<<setw(14)<<seats<<right<<setw(11)<<air;
    }
    

};
int main()
{
    car a[999];
    string ch;
    int range_price;
    int option,i,choose,n;
    cout<<"enter number of cars :";
    cin>>n;
    
    for ( i = 0; i < n; i++)
    {
        a[i].getdata();//function call for data input 
        fflush(stdin);
    }
    
    cout<<"WELCOME TO TATA MOTORS"<<endl;
    cout<<"GET THE CAR DETAILS AS PER YOUR PREFRENCE"<<endl;
        cout<<"(1)Model name(2)Fuel type(3)Price range"<<endl;
        cout<<"Enter your option: ";
        cin>>option;
        //option 1 model name
        //       2 fuel type
        //       3 price range
        switch (option)
        {
        case 1:
                for (i = 0; i < n; i++)
                {
                    a[i].display_modelname();//function call for model name
                }
                cout<<endl;
                cout<<"CHOOSE YOUR CAR TO GET DETAILS "<<endl;
                cin>>choose;
                for ( i = 0; i < n; i++)
                {
                    if (choose==i+1)
                    {
                        a[i].display_detail();//display detail
                    }
                    
                }
            break;
        case 2:
                cout<<"select fuel type: "<<endl;
                cout<<"(1)petrol"<<endl; 
                cout<<"(2)diesel"<<endl;   
                cout<<"(3)electric"<<endl;
                cout<<"(4)cng"<<endl;
                cin>>choose;
                
                for ( i = 0; i < n; i++)
                {
                    if (choose==a[i].fuel_no)
                    {
                        a[i].display_detail();
                    }
                                
                }
                break;
            case 3:
                cout<<"ENTER MAXIMUM AFFORDABLE PRICE RANGE :";
                cin>>range_price;
                for ( i = 0; i < n; i++)
                {
                    if (a[i].showroom_price<=range_price)
                    {
                        a[i].display_detail();
                    }
                    
                }
                break;
        }
    return 0;
}