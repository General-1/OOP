#include <bits/stdc++.h>
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d,int m,int y):day(d),month(m),year(y) {}
    void print_date(){
        std::cout<< "Date: " << day << "/" << month << "/" << year << std::endl;
    }
    
};

class SMA
{
private:
    std::string FirstName;
    std::string LastName;
    std::string email; 
    Date dateOfBirth;
public:
    SMA(std::string fn,std::string ln,std::string e,Date dob): FirstName(fn),LastName(ln),email(e),dateOfBirth(dob){}
    
};



int main(){

}