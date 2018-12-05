#include<stdio.h>
#include<string.h>

typedef struct student
{
	char NAME[99] ;
	char GENRE[99] ;
	char PUBLISHER[99] ;
	int SERIALCODE ;
	char AUTHOR[99] ;
	float PRICE ;
    int AMOUNT ;
    
}inst;

int func(struct student inst[],int,char[]);

int main()
{
	FILE*pread=fopen("inventory.txt","r");
	struct student inst[999];
	 
	int count=0;
	char name[28];
	printf("enter name ");
	scanf("%s",name);
	
	
	
	fscanf(pread,"&s&s&s%d%s%f%d",inst[count].NAME,inst[count].GENRE,inst[count].PUBLISHER,&inst[count].SERIALCODE,inst[count].AUTHOR,&inst[count].PRICE,&inst[count].AMOUNT);
	while(!feof(pread));
	{
		printf("&s&s&s%d%s%f%d",inst[count].NAME,inst[count].GENRE,inst[count].PUBLISHER,inst[count].SERIALCODE,inst[count].AUTHOR,inst[count].PRICE,inst[count].AMOUNT);
		count++;
		fscanf(pread,"&s&s&s%d%s%f%d",inst[count].NAME,inst[count].GENRE,inst[count].PUBLISHER,inst[count].SERIALCODE,inst[count].AUTHOR,inst[count].PRICE,inst[count].AMOUNT);
	}
	
	if (func(inst,count,name)==-1)
	    printf("record not found\n");
    else
        printf(" record found in imdex number %d",func(inst,count,name));
        return 0;
}
	  
	  
	  
	int func(struct student record[], int numofrecords,char svalue[])
{

	int x ,location=-1;
	for(x=0;x< numofrecords;x++)
	{
	
	if(strcmp(svalue;[x].NAME)==0)
	   location=x;
	
    }
    
	return location;
	
	
	
}
