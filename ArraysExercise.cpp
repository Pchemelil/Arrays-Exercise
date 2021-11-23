//137339 Peter Chemelil
//Arrays Exercise
/*Here I use arrays and for loops to get the 
sum, product and mean of a 10 integer array*/
#include <iostream>
using namespace std;

int main(){
	int ten[10] = {10,20,30,40,50,60,70,80,90,100};
	int sum = 0;
	int area = 0;
	int product = 1;
	
	cout<<"The sum of the array is:\n ";
	for(int i=0; i<10; i++){
		sum= sum+ten[i];
	}
	cout<< sum<<endl;
	
	cout<<"The area of the array is:\n ";
	for(int i=0; i<10; i++){
		area= (area+ten[i]);
	}
	cout<<area/10<<endl;
	
	cout<<"The product of the array is:\n ";
	for(int i=0; i<10; i++){
		product= (product*ten[i]);
	}
	cout<<product<<endl;
	return 0;
}
