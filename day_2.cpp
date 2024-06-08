#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double c,tp,tx;
    cin>>c>>tp>>tx;
    double tip = (c*tp)/100;
    double tax = (c*tx)/100;
    cout<<round(c+tip+tax);



    return 0;
}
