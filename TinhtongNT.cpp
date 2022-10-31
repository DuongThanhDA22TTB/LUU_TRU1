#include <stdio.h>
#include <iostream> 
using namespace std;
int main ()
{
    long temp, n;
  int TONGNT = 1;
  KTNT(int x);
do
  {
    printf("\nNhap vào so nguyên n lon hon 0 va nho hon 20: ");
    scanf("%ld", &n);
    if(n <= 0 and n >=20)
    {
      printf("\n So n phai lon hon 0 va nho hon 20, vui lòng nhap lai !");
    }
  }while(n <= 0 and n >=20);
	return 0;
	if(KTSNT(n)==true)
		cout<< n << " la so nguyen to!";
	else
		cout<< n <<" khong la so nguyen to!";
	cout<<endl;
	return 0;
	temp = n;
  while(temp != 0)
  {
     P = P + (temp % 10);
     temp = temp / 10;
  }
  cout<<"\nTong cua cac so nguyen to "<<n<<" la: "<< P;
  return 0;
	
}
