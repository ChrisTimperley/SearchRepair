#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* case1(int a, char* c, char* b);

int main(int argc, char** argv){
	int a = atoi(argv[1]);
	char* c = argv[2];
	char b[20];
	strcpy(b, "ab");
	case1(a, c, b);
	return 1;
}

char* case1(int a, char* c, char* b){
	a = 3;
    
    char g[20];
printf("input state:g:%s:char*,b:%s:char*,c:%s:char*,a:%d:int\n", g, b, c, a);
	strcpy(g, "ab");	
printf("output state:g:%s:char*,b:%s:char*,c:%s:char*,a:%d:int\n", g, b, c, a);
	strcpy(b, c);

	strcat(b, c);

	
	
	if(a > 4){
        int k = 9;
		printf("g");
	}
	else if(a < 3){
		printf("c");
	}
	return b;
}
