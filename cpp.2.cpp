//Problema rucsacului
#include<fstream>
using namespace std;
int G;
int n;
ifstream f("rucsac.in");
struct obiect { float greutate;
int numar;
int cost;}
int a[100];


int read_data()
{
 f>>n;
   f>>G;
   for(int i=1;i<=n;i++)
     {f>>a[i].greutate;
      f>>a[i].cost;
      a[i].numar=i;
}

int fill_data()
{
    cout<<"Lista de obiecte este: "<<endl;
    for(int i=1;i<=n;i++)
        cout<<"Obiectul "<<a[i].numar<<" are greutatea "<<a[i].greutate<<" si costul de: "<<a[i].cost<<endl;
        cout<<endl;
}

int sort_data()
{
  for(int i=1;i<=n-1;i++)
  if(a[i].cost<a[i+1].cost
}

float greedy()
{
for(int i=1;i<=n;i++)
     if(a[i].greutate<=G)
       { cout<<a[i].numar<<" ";
         G=G-a[i].greutate;
}

int main()
{
 read_data();
 fill_data();
 sort_data();
 cout<<greedy();
}
