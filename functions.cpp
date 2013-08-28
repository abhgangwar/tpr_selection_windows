#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstring>
using namespace std;
char * get_name(int rno, char a[])
{
int roll_no;
char name[40],cl;
FILE *fp;
fp=fopen("det.txt","r");
if(!fp) cout<<"Sorry unable to open det.txt"<<endl;
while(!feof(fp))
{
fscanf(fp,"%d\t",&roll_no);
fgets(a,40,fp);
if(rno==roll_no)
{
break;
}
else
strcpy(a,"NOT_FOUND\n");
}
fclose(fp);
return a;
}

void clear()
{
for(int i=0;i<46;i++)
cout<<"\n";
}