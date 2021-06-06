#include <iostream>

using namespace std;
int factorial(int n){
 if(n<0)return 0;
 if (n==1||n==0) return 1;
 if(n>0){
    return(n*factorial(n-1));
 }

}
int mcd(int a, int b){
  if(a<b) mcd(b,a);
  if(b==0)return a;
  return mcd(b,a%b);
}
struct frac{
int num;
int den;
};
int simplificar(int num,int den){
    int z;
z=mcd(frec.num,frec.den);
  cout<< "\n";
  cout<<"  " <<(frec.num/z);
  cout<<"\n......\n";
  cout<<"  " <<(frec.den/z);
}


int main()
{ /*int n;
  cout << "ingrese un numero: ";
  cin >> n;
  cout << factorial(n);
*/
 /*int a;
 int b;
 cout << "Ingrese a: ";
 cin >> a;
 cout << "Ingrese b: ";
 cin >> b;
 cout << mcd(a,b);
*/   int z;
   frac frec;
    cout << "Ingrese numerador: ";
 cin  >> frec.num;
 cout << "Ingrese denominador: ";
 cin  >> frec.den;
 cout <<"  " << frec.num;
 cout <<"\n......\n";
 cout <<"  "<<frec.den<<"\n";

 return 0;

}
