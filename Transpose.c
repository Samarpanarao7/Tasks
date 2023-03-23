#include <stdio.h>

int main()
{
	int a[100][100],r,c,i,j;
	printf("enter the rows::");
	scanf("%d",&r);
	printf("\nenter the colums::");
	scanf("%d",&c);
	printf("now enter the elements::\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}

	printf("printing the matrix::\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}

	int b[c][r];

	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			b[i][j] = a[j][i];
		}
	}
	printf("now printing the transpose of the matrix:\n");
	for(i=0;i<c;i++){
                for(j=0;j<r;j++){
                        printf(" %d",b[i][j]);
                }
                printf("\n");
        }


}
