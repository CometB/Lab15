#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a,int &b,int &c,int &d){
    int t = rand()%16;
    int tmp;
    if((t>>3) % 2){
        tmp = a;
        a = d;
        d = tmp;
    }
    if((t>>2) % 2){
        tmp = a;
        a = c;
        c = tmp;
    }
    if((t>>1) % 2){
        tmp = b;
        b = d;
        d = tmp;
    }
    if(t % 2){
        tmp = b;
        b = c;
        c = tmp;
    }
}
