#include <iostream>	
#include <conio.h>	
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <time.h>
using namespace std;
int main()
{
setlocale(LC_ALL,"Rus");
int  i1,i,timeint, clickint; 
string inputname,timestr, clickstr, s1; 
fstream file;
cout<<"Запуск программы. Обратите внимание на оставшееся кол-во запусков и время выполнения"<<endl;


	system("reg query \"HKCU\\Software\\Tolstova\" /v \"time\" > time.txt"); //проверка записей о времени в реестре
	file.open("time.txt");
	file>>timestr; file>>timestr; file>>timestr; file>>timestr; file>>timestr; file>>timestr;
	file.close();
	system("del time.txt");
	timeint=atoi(timestr.c_str());
	
	time_t result = time(NULL);
	
	system("reg query \"HKCU\\Software\\Tolstova\" /v \"click\" > click.txt"); //проверка записей о попытках
	file.open("click.txt");
	file>>clickstr; file>>clickstr; file>>clickstr; file>>clickstr; file>>clickstr; file>>clickstr;
	file.close();
	system("del click.txt");
	clickint=atoi(clickstr.c_str());
	
if ((clickint==100) and (timeint==100)) //проверка,была ли установлена программа
{
cout<<"У вас 5 попыток и 120 секунд времени "<< endl;   //установка программы в 1 раз
system("reg add \"HKCU\\Software\\Tolstova\" /t REG_SZ /v \"click\" /d \" 5\"");
char str[100];
sprintf(str, "%d", time(NULL));
system(("reg add \"HKCU\\Software\\Tolstova\" /t REG_SZ /v \"time\" /d "+string(str)).c_str());		
}
 else
{
cout<<"Установка невозможна.Программа уже была установлена.Для того,чтобы ее удалить, нажмите 1"<< endl;  //вариант удаления 
int i;
cin>>i;
switch ( i)  
      {  
         case 1: 
         system("del 3.exe");
		  break;  
         default: 
		 getch(); //выход из программы без удаления файла работы программы
            
      } 

}


    
}
    
