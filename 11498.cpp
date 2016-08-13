#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	
	int k = -1, n, m, x, y;
	
	scanf("%d", &k);
	
	while (k != 0){
		
		scanf("%d %d", &n, &m);
		
		while(k > 0){
			
			scanf("%d %d", &x, &y);
			
			if(x == n || y == m){
				
				cout << "divisa\n";
				
			}else if(x < n){
				
				if(y > m){
					
					cout <<"NO\n";
					
				}else{
					
					cout <<"SO\n";
					
				}
				
			}else{
				
				if(y > m){
					
					cout << "NE\n";
					
				}else{
					
					cout << "SE\n";
					
				}
				
			}
			
			k --;
			
		}
		
		scanf("%d", &k);
		
	}
	
	return 0;
	
}