#include<iostream>
using namespace std;

int convert(int num)
{
  int dval=0 , rem=0, base=1;
  while(num>0){
      rem = num%10;
      dval = dval+rem*base;
      base = base*2;
      num = num/10;
      }
  return dval;
}

int main()
{ 
    int a;
    cin>>a;
    cout<<(convert(a));
    return 0;


}