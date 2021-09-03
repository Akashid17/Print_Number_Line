
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        void NumberLine(int);
};

void ArithmeticX::NumberLine(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = (-iNo); i <= iNo; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    ArithmeticX aobj;
    aobj.NumberLine(iValue);

    return 0;
}