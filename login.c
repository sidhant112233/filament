#include<stdio.h>
main()
{
	char username[20];
	char password[10];
	
	printf("Enter username =");
	scanf("%s",&username);
	printf("Enter password =");
	scanf("%s",&password);
	
	if(strcmp(username,"siddhant")==0)
	{
		
		if(strcmp(password,"1020.siddhant")==0)
		{
			printf("succesfuly login");
		}
		else
		{
			printf("incorrect password");
		}
		
	}
	else
	{
		("wrong username");
	}
}
