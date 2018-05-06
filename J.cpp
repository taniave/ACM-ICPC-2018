#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tc,x,y,i,par,impar;
	
	scanf("%d",&tc);
	
	while(tc--){
		scanf("%d %d",&x,&y);
		par=impar=0;
		for(i=x;i<=y;i++){
			if(i%2==0)
				par++;
			else
				impar++;
		}
		printf("%d %d\n",par,impar);
	}
	return 0;
}
