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
cout<<"������ ���������. �������� �������� �� ���������� ���-�� �������� � ����� ����������"<<endl;


	system("reg query \"HKCU\\Software\\Tolstova\" /v \"time\" > time.txt"); //�������� ������� � ������� � �������
	file.open("time.txt");
	file>>timestr; file>>timestr; file>>timestr; file>>timestr; file>>timestr; file>>timestr;
	file.close();
	system("del time.txt");
	timeint=atoi(timestr.c_str());
	
	time_t result = time(NULL);
	
	system("reg query \"HKCU\\Software\\Tolstova\" /v \"click\" > click.txt"); //�������� ������� � ��������
	file.open("click.txt");
	file>>clickstr; file>>clickstr; file>>clickstr; file>>clickstr; file>>clickstr; file>>clickstr;
	file.close();
	system("del click.txt");
	clickint=atoi(clickstr.c_str());
	
if ((clickint==100) and (timeint==100)) //��������,���� �� ����������� ���������
{
cout<<"� ��� 5 ������� � 120 ������ ������� "<< endl;   //��������� ��������� � 1 ���
system("reg add \"HKCU\\Software\\Tolstova\" /t REG_SZ /v \"click\" /d \" 5\"");
char str[100];
sprintf(str, "%d", time(NULL));
system(("reg add \"HKCU\\Software\\Tolstova\" /t REG_SZ /v \"time\" /d "+string(str)).c_str());		
}
 else
{
cout<<"��������� ����������.��������� ��� ���� �����������.��� ����,����� �� �������, ������� 1"<< endl;  //������� �������� 
int i;
cin>>i;
switch ( i)  
      {  
         case 1: 
         system("del 3.exe");
		  break;  
         default: 
		 getch(); //����� �� ��������� ��� �������� ����� ������ ���������
            
      } 

}


    
}
    
