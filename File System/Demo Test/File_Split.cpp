#include <iostream>
#include <fstream>
//#include <ofstream>

using namespace std;

int main()
{
    ifstream in("Player Draft Form.csv");
    ofstream fir("1st Year.csv");
    ofstream sec("2nd Year.csv");
    ofstream thi("3rd Year.csv");

    if(!in)
    {
        cout << "Cannot open input file.\n";
        return 1;
    }


    std::string str;
    int c=0, i, cma;
    while (std::getline(in, str))
    {
        c++;
        i=0;
        cma=0;
        std::cout << str << "-->" << c << std::endl;
        while(str[i]!='\0')
        {
            if(cma==3)
            {
                if(str[i]=='1')
                {
                    fir << str;
                    fir << "\n";
                }
                else if(str[i]=='2')
                {
                    sec << str;
                    sec << "\n";
                }
                else if(str[i]=='3')
                {
                    thi << str;
                    thi << "\n";
                }
            }
            if(str[i]==',')
            {
                cma++;
            }
            i++;
        }
    }

    in.close();
    fir.close();
    sec.close();
    thi.close();

    return 0;
}
