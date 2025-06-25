#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][n];
	int i,j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0; i<n; i++) {
	    int a=0;
		for(j=0; j<n; j++) {
			if(j<i+1){
			    if(arr[i][j]!=0){
			        printf("Its not a Triangular Matrix");
			        a=1;
			        break;
			    }
			}
		}
		if(a)
		break;
	}
	if(i==n && j==n){
	    printf("Its a Right Angle Triangle");
	}

	return 0;
}