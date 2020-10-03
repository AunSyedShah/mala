#include <iostream>
using namespace std;

class Paper
{
private:
    string _paperTitle;
    int _paperID;
    string _courseCode;
    string _courseIncharge;
    int _semester;
    string programName;
    string _date;
    string _time;
    string _examType;
    string _invigilator;
    string _location;
    int _noOfStudents;
    bool _isColledted;
public:
    Paper(int, string, int);

    //getter
    string getPaperTitle()
    {
        return _paperTitle;
    }
    int getpaperID()
    {
        return _paperID;
    }
    string getcourseCode()
    {
        return _courseCode;
    }
    string getCourseIncharge()
    {
        return _courseIncharge;
    }
    int getSemester()
    {
        return _semester;
    }
    string getProgramName()
    {
        return programName;
    }
    ~Paper();
};

Paper::Paper(int paperID, string courseCode, int noOfStud)
{
    _paperID = paperID;
    _courseCode = courseCode;
    _noOfStudents = noOfStud;
    _isColledted = false;
}

Paper::~Paper()
{
}


int main()
{ 
   
}