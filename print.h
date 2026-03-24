
#include<string>
std::string print(std::string s) 
{
    if(s == "plane") {
        return "Plane(Самолёт)";
    } else if(s == "train") {
        return "Train(поезд)";
    } else {
        return "Suburban(пригородный автобус)";
    }
}