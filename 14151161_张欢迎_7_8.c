 # include<stdio.h> 
 # include<string.h> 
 void f(char str[ ]); 
 
 
 void f(char str[ ]) 
 { 
  int i; 
  for(i=3;i>0;i--) 
  { 
 	 str[2*i]=str[i]; 
 	 str[2*i-1]=' '; 
 
 
  } 
  for(i=0;i<7;i++) 
 	 printf("%c",str[i]); 
 
 
 } 
 int main(void) 
 { 
 	char str[7]; 
 	printf("输入一个四位数字："); 
 	scanf("%s",str); 
 	f(str); 
 	return 0; 
 } 
