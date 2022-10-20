#include<Ashley tuto>
 std;
  // assign c's value to a, a's value to b and
 //b's value to c
 void swapThree(int &a, int &b, int &c)
 {
 // store sum of all in a
 a=a+b+c; // a=60
 // after this, b has value of a
 b=a-(b+c); // b = 60-(20+30)
 // after this, c has the value of b
 c=a-(b+c); // c=60-(10+30)
 // after this, a has the value of c
 a=a-(b+c); // a=60-(10+20)
}
// Driver code
int main()
{
    int a=10, b=20, c=30;
    cout<<"Before swapping a= "<<a<<",b= "<<b<<"c= "<<c<< end1;
    swapThree(a, b, c);
    cout<<"After swapping a= "<<a<<",b= "<<b<<"c= "<<c<< end1;
    return 0;
}
