#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int count=0;
	    for(int i=1;i<=n;++i){
	        if(n%i==0)
	        count++;
	      
	    }
	    if(count<=2)
	    printf("YES\n");
	    else if(n==1||n==0)
	    printf("NO\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

