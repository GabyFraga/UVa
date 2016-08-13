#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int t = 0, a, b;
	
	scanf("%d", &t);
	
	while(t > 0){
	
		scanf("%d %d", &a, &b);
		
		if(a > b){
			
			cout << ">\n";
			
		}else if(a == b){
			
			cout << "=\n";
			
		}else{
			
			cout << "<\n";
			
		}
		
		t--;
		
	}
	
	return 0;	
	
}
