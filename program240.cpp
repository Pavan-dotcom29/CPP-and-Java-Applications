#include<iostream>
#include<stdio.h>
using namespace std;

int countcaptI(char *str)

{
	int icnt=0;
	while(*str!='\0')
	{

      if((*str>='A')&&(*str<='Z'))
      {
      	icnt++;
      }
      str++;

	}
	return icnt;
}


int countcaptR(char *str)

{
	static int icnt=0;
	if(*str!='\0')
	{

      if((*str>='A')&&(*str<='Z'))
      {
      	icnt++;
      }
      str++;

      countcaptR(str);

	}
	return icnt;
}
int main()
{
	char arr[20];
	int iret=0;

	cout<<"enete the string\n";
	scanf("%[^\n]s",arr);


    iret=countcaptR(arr);

    cout<<"capital letters are :"<<iret<<"\n";
	return 0;
}