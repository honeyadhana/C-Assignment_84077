//Write Date a menu driven program for Date in a CPP language using structure and also using class. is having data members day, month, year. Implement the following functions.
//vnid initiate();
//void printDateOnConsole();
//void acceptDate[romConsole();
//bool isLeap Year().

#include<iostream>
using namespace std;

struct Date {
    private:
    int day;
    int month;
    int year;

    public:
    void initDate(){
        day=01;
        month=01;
        year=2024;
      cout<<"Date initialised to : "<<day<<"-"<<month<<"-"<<year<<endl;
}

void printDateOnConsole()
{
    cout<<"Date :  "<<day<<"-"<<month<<"-"<<year<<endl;
}

void acceptDateFromConsole()
{
    cout<<"Enter the day - dd"<<endl;
    cin>>day;

    cout<<"Enter the month - mm"<<endl;
    cin>>month;

    cout<<"Enter the year - yyyy "<<endl;
    cin>>year;

}

bool isLeapYear()
{
    if(year % 4 ==0)
    {
        if(year % 100 == 0)
        {
         return year % 400 == 0;
        }
    return true;  
    }
    return false;
    

}

int getYear()
{
    return year;
}

int menu()
{
    int choice;

    cout<<"Enter your choice.."<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.Initialize date "<<endl;
    cout<<"2.Accept date "<<endl;
    cout<<"3.Print date "<<endl;
    cout<<"4.Check for leap year "<<endl;
    cin>>choice;
    return choice;
    
}

};
int main()
{
    int choice;
    struct Date mydate;
    while((choice = mydate.menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            mydate.initDate();
            break;

        case 2:
            mydate.acceptDateFromConsole();
            break;

        case 3:
            mydate.printDateOnConsole();
            break;

        case 4:
            if(mydate.isLeapYear()){
                cout<<mydate.getYear()<<" is a leap year.";
                }
            else{
                cout<<"Not a leap year.";
            }
            break;

        default:
            cout<<"Invalid choice !!! Please choose again....";
            break;
        }
    }
    cout<<"Thank You..."<<endl;
    return 0;
}


