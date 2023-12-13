#include <iostream>
using namespace std;

class student
{
public:
    string name;;
    double gpa;

    student(string aname,double agpa)
    {
        name = aname;
        gpa = agpa;
    }

    bool hashoner(){
        if (gpa > 2.0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};

int main()
{
    student student1("Chamilka",2.3);
    student student2("Ruhan",1.3);
    student student3("Saadun",3.0);

    cout<<student3.hashoner();
    return 0;
}
