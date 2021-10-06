#include <iostream>

using namespace std;

class str3WP
{
    public:
        void str1(char nbi[11])
        {
            nbi[10] = '\0';
            cout << nbi[0]<<"$"<<nbi[1]<<"$"<<nbi[2]<<"$"<<nbi[3]<<"$"<<nbi[4]<<"$"<<nbi[5]<<"$"<<nbi[6]<<"$"<<nbi[7]<<"$"<<nbi[8]<<"$"<<nbi[9]<<"$"<<nbi[10];
        }
        void str2(char hbok[11])
        {
            hbok[10] = '\0';
            cout << hbok[0]<<"z"<<hbok[1]<<"y"<<hbok[2]<<"x"<<hbok[3]<<"w"<<hbok[4]<<"v"<<hbok[5]<<"u"<<hbok[6]<<"t"<<hbok[7]<<"s"<<hbok[8]<<"r"<<hbok[9]<<"q"<<hbok[10];
        }
        void str3(char tve[11])
        {
            tve[10] = '\0';
            cout << tve[0]<<tve[1]<<tve[2]<<tve[3]<<tve[4]<<"a"<<tve[5]<<tve[6]<<tve[7]<<tve[8]<<tve[9]<<tve[10];
        }
};



int main()
{
    str3WP test;
    int td;
    /*
    char su[10];
    for (int r = 0 ; r < 10 ; r++)
    {
        cout << "enter char 44  ";
        cin >> su;
    }
    */
    //test.str1(su);
    //test.str2(su);
    //test.str3(su);
    char kn[10] = {'u' , 'S' , 'c' , 'C' , 'v' , 'a' , 'p' , 'm' , '<' , 'k'};

    test.str1(kn);
}
