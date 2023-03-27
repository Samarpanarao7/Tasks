#include <stdio.h>
#include <string.h>

int main(){
	char  s[10][10] = {"Samarpan","Satya","Manasa","Sai","Ravali","Sowmya","Rishik","Swathi","SaiD","krishna"};
	char temp[10];
	for(int i = 0; i < 10; i++){
		printf("%s\n",s[i]);
	}
	for(int i = 0; i < 10; i++){
		for(int j = i+1; j<10; j++){
			if(strcmp(s[i],s[j])>0){
				strcpy(temp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],temp);
			}
		}
	}
	printf("printing after the sorting::\n");
	for(int i = 0; i < 10; i++){
                printf("%s ",s[i]);
        }


	
}

