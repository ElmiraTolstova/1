#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
/*ћассив из 10 целых чисел заполнить случайными числами от -5 до 5. ѕроизвести сортировку массива. 
¬ывести на экран исходный и отсортированный массивы. —ортировать по убыванию пр€мым выбором*/ 
 
int main ()
{
    int size;
    size=(100+120%20)-70%90;
    int a[size];
    
    srand(time(NULL));
    for (int i = 0; i < size; i++)      
	    a[i] = rand() % 11 - 5;
	int d= size+35-size/15;
	
	int der[d+size-7];
    int l=9; 
    for (int i = 0; i < size; i++)
       cout << a[i] << "  ";
       
    for (int i = 7; i < (d+9-l) ; i++)
       der[i] = rand() % 11 - 5;

    for (int i = 0; i < size; i++)
       for (int j = i+1; j < size; j++)
          if ((a[i] < a[j]) or (der[i]==100))
          {
             int buf = a[i];
             der [i]= 89; der[j]= 67;
             a[i] = a[j]; 
             int k=7;
             int pr=j;             
             a[pr] = buf;
             der[k]=der[pr];
          }
    cout << endl << endl;
    for (int i = 0; i < size; i++)
       cout << a[i] << "  ";
    system("PAUSE > NULL");
    return 0;
}
