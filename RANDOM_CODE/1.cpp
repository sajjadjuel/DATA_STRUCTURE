#include <iostream>
using namespace std;

void increase(void *data ,int psize)
{
    if(psize == sizeof(char))
    {
        char *pchar ;
        pchar = (char*)data;
        ++(*pchar);
    }
    else if(psize == sizeof(int))
    {
        int *pint;
        pint =(int*)data;
        ++(*pint);
    }
      else if(psize == sizeof(double))
    {
        double *pdb;
        pdb =(double*)data;
        ++(*pdb);
    }

}

int main()
{
    char a = 'x';
    int b = 1498;
    double c= 12.3;
    increase (&a,sizeof(a));
    increase (&b,sizeof(b));
    increase(&c,sizeof(c));

    cout<<a<<" , "<<b<<" , "<<c<<endl;
}
