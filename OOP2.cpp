#include <iostream>
using namespace std;

class Movie
{
    private:
        string rating;
    public:
        string name;

        Movie(string aname,string arating)
        {
            name = aname;
            setrating(arating);
        }

        void setrating(string arating)
        {
            if (arating == "PG" || arating == "PG-1")
            {
                rating = arating;
            }else{
                rating = "NR";
            } 
        }

        string getrating(){
            return rating;
        }
};

int main()
{
    Movie Avangers("Avengers","PG");
    cout<<Avangers.getrating()<<endl;

    Avangers.setrating("dog");
    cout<<Avangers.getrating();
    return 0;
}
