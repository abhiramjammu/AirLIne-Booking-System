#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
void mainmenu();

class Management
{
    public:
    Management()
    {
        mainmenu();

    }
};
class details
{
    public:
    static string name,gender;
    int phoneno;
    int age;
    string address;
    static int cid;
    char arr[100];
    void information()
    {
        cout<<"Enter the cusotmer id"<<endl;
        cin>>cid;
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"Enter the age"<<endl;
        cin>>age;
        cout<<"address"<<endl;
        cin>>address;
        cout<<"gender"<<endl;
        cin>>gender;
        cout<<"your details are with us"<<endl;
    }
};
int details::cid;
string details::name;
string details::gender;
class registration
{
    public:
    static int choose;
    int choose1;
    int back;
    static float charges;
    void flights()
    {
        string flightN[]={"bubai","canada","uk","india","europe"};
        for (int a=0;a<5;a++)
        {
            cout<<(a+1)<<"flight to "<<flightN[a]<<endl;
        }
        cout<<"\n welconem to the Airlines"<<endl;
        cout<<"press the number of the country "<<endl;
        cin>>choose;
        switch(choose)
        {
            case 1:
            {
                cout<<"welcome to bubai airlines"<<endl;
                cout<<"serving comfort since 1980's"<<endl;
                cout<<"followin are flights"<<endl;
                cout<<"1.bubai -996"<<endl;
                cout<<"Date: 9-8-24 Time:5:00 AM  Rs:50000"<<endl;
                cout<<"2.bubai -996"<<endl;
                cout<<"Date: 10-8-24 Time:5:00 AM  Rs:50000"<<endl; 
                 cout<<"3.bubai -996"<<endl;
                cout<<"Date: 11-8-24 Time:5:00 AM  Rs:50000"<<endl;
                cout<<"select the flight";
                cin>>choose1;
                if(choose1==1)
                {
                    charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl;

                }
                else if(choose1==2)
                {
                   charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl; 
                }
                else if(choose1==3)
                {
                   charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl; 
                }
                else
                {
                    cout<<"invalid credential given";
                    flights();

                }
                cout<<"press any key to go back to main menu";
                cin>>back;
                if (back==1)
                {
                    mainmenu();
                }
                else
                {
                    mainmenu();

                }
            }
             case 2:
            {
                cout<<"welcome to canadian airlines"<<endl;
                cout<<"serving comfort since 1980's"<<endl;
                cout<<"followin are flights"<<endl;
                cout<<"1.canada -996"<<endl;
                cout<<"Date: 9-8-24 Time:5:00 AM  Rs:50000"<<endl;
                cout<<"2.canada -997"<<endl;
                cout<<"Date: 10-8-24 Time:5:00 AM  Rs:50000"<<endl; 
                 cout<<"3.canada -998"<<endl;
                cout<<"Date: 11-8-24 Time:5:00 AM  Rs:50000"<<endl;
                cout<<"select the flight";
                cin>>choose1;
                if(choose1==1)
                {
                    charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl;

                }
                else if(choose1==2)
                {
                   charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl; 
                }
                else if(choose1==3)
                {
                   charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl; 
                }
                else
                {
                    cout<<"invalid credential given";
                    flights();

                }
                cout<<"press any key to go back to main menu";
                cin>>back;
                if (back==1)
                {
                    mainmenu();
                }
                else
                {
                    mainmenu();

                }
            
            }
            case 3:
            {
                cout<<"welcome to uk airlines"<<endl;
                cout<<"serving comfort since 1980's"<<endl;
                cout<<"followin are flights"<<endl;
                cout<<"1.uk -423"<<endl;
                cout<<"Date: 9-8-24 Time:5:00 AM  Rs:50000"<<endl;
                cout<<"2.uk -424"<<endl;
                cout<<"Date: 10-8-24 Time:5:00 AM  Rs:50000"<<endl; 
                 cout<<"3.uk -424"<<endl;
                cout<<"Date: 11-8-24 Time:5:00 AM  Rs:50000"<<endl;
                cout<<"select the flight";
                cin>>choose1;
                if(choose1==1)
                {
                    charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl;

                }
                else if(choose1==2)
                {
                   charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl; 
                }
                else if(choose1==3)
                {
                   charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl; 
                }
                else
                {
                    cout<<"invalid credential given";
                    flights();

                }
                cout<<"press any key to go back to main menu";
                cin>>back;
                if (back==1)
                {
                    mainmenu();
                }
                else
                {
                    mainmenu();

                }
            
            }
            case 4:
            {
                cout<<"welcome to indian airlines"<<endl;
                cout<<"serving comfort since 1980's"<<endl;
                cout<<"followin are flights"<<endl;
                cout<<"1.india -996"<<endl;
                cout<<"Date: 9-8-24 Time:5:00 AM  Rs:50000"<<endl;
                cout<<"2.india -997"<<endl;
                cout<<"Date: 10-8-24 Time:5:00 AM  Rs:50000"<<endl; 
                 cout<<"3.india -998"<<endl;
                cout<<"Date: 11-8-24 Time:5:00 AM  Rs:50000"<<endl;
                cout<<"select the flight";
                cin>>choose1;
                if(choose1==1)
                {
                    charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl;

                }
                else if(choose1==2)
                {
                   charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl; 
                }
                else if(choose1==3)
                {
                   charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl; 
                }
                else
                {
                    cout<<"invalid credential given";
                    flights();

                }
                cout<<"press any key to go back to main menu";
                cin>>back;
                if (back==1)
                {
                    mainmenu();
                }
                else
                {
                    mainmenu();

                }
            
            }
             case 5:
            {
                cout<<"welcome to europe airlines"<<endl;
                cout<<"serving comfort since 1980's"<<endl;
                cout<<"followin are flights"<<endl;
                cout<<"1.europe-kk2"<<endl;
                cout<<"Date: 9-8-24 Time:5:00 AM  Rs:50000"<<endl;
                cout<<"2.europe-kk3"<<endl;
                cout<<"Date: 10-8-24 Time:5:00 AM  Rs:50000"<<endl; 
                 cout<<"3.europe-kk4"<<endl;
                cout<<"Date: 11-8-24 Time:5:00 AM  Rs:50000"<<endl;
                cout<<"select the flight";
                cin>>choose1;
                if(choose1==1)
                {
                    charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl;

                }
                else if(choose1==2)
                {
                   charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl; 
                }
                else if(choose1==3)
                {
                   charges=50000;
                    cout<<"booking successful"<<endl;
                    cout<<"you can access to your ticket at main menu"<<endl; 
                }
                else
                {
                    cout<<"invalid credential given";
                    flights();

                }
                cout<<"press any key to go back to main menu";
                cin>>back;
                if (back==1)
                {
                    mainmenu();
                }
                else
                {
                    mainmenu();

                }
            
            }
            default:
            {
                cout<<"invalid input"<<endl;
                mainmenu();
                break;
            }
        }
    }
};
float registration::charges;
int registration::choose;
class ticket: public registration,details
{
public:
void bill()
{
    string destinataion="  ";
    ofstream outf("records.txt");
    {
        outf<<"                 AB airlines         "<<endl;
        outf<<"                ticket             "<<endl;
        outf<<"customer id "<<details::cid<<endl;
        outf<<"customer name"<<details::name<<endl;
         outf<<"customer gender"<<details::gender<<endl;
          outf<<"dese"<<endl<<endl;
          if(registration::choose==1)
          {
            destinataion="bubai";
          }
          else if( registration::choose==2)
          {
            destinataion="canada";
          }
          else if( registration::choose==3)
          {
            destinataion="uk";
          }
          else if( registration::choose==4)
          {
            destinataion="india";
          }
          else if( registration::choose==5)
          {
            destinataion="europe";
          }
          outf<<"destination\t\t"<<destinataion<<endl;
          outf<<"flight cost  "<<registration::charges<<endl;
    }
    outf.close();
}
void dispbill()
{
    ifstream ifs("records.txt");
    {
        if(!ifs)
        {
            cout<<"file erroe!"<<endl;
        }
        while(!ifs.eof())
        {
            ifs.getline(arr,100);
            cout<<arr<<endl;

        }
    }
    ifs.close();
}
};
void mainmenu()
{
    int choose1;
    int choose2;
    int back;
    cout<<"\t ***********AB airlines*********************\n"<<endl;
    cout<<"\t           mainmenu                 "<<endl;
    cout<<"\t                                    "<<endl;
    cout<<" press 1 to add the customer details "<<endl;
    cout<<" press 2 to register a flight ticket"<<endl;
    cout<<" press 3 for ticket and charges"<<endl;
    cout<<"press 4 to exit"<<endl;
    cout<<"enter the choice:"; 
    cin>>choose1;
    details d;
    registration r;
    ticket t;
    switch(choose1)
    {
        case 1:
        {
            cout<<"         customers          "<<endl;
            d.information();
            cout<<"press 1 to go back to the mainmenu";
            cin>>back;

            if(back==1)
            {
                mainmenu();
             }
             else
             { 
                mainmenu();

             }
             break;

        }
        case 2:
        {
            cout<<"          book a flight      "<<endl;
            r.flights();
            break;
    
        }
        case 3:
        {
            cout<<"            get your tickets     "<<endl;
            t.bill(); 
            cout<<"your ticket is printed";
            cout<<"press 1 to display your ticket";
            cin>>back;
             if(back==1)
             {
                t.dispbill();
                cout<<"press any to key to go back to main menu";
                cin>>back;
                if(back==1)
                {
                    mainmenu();
                }
                else
                {
                    mainmenu();

                }
             }
             else
             {
                mainmenu();

             }
         case 4:
         {
            cout<<"endl<<endl<<thankyou"<<endl;
            break;

         }  
         default:
         {
            cout<<"invalid input, please try again\n"<<endl;
            mainmenu();
            break;
         }  
        }    
    }

}
int main()
{
    Management mobile;
    return 0;
}