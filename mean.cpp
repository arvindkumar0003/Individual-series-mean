#include<iostream.h>
#include<conio.h>

void main(){
	//Declaration of x, f, fx and n;
	int n , x [ 50 ] , f [ 50 ] , fx [ 50 ];
	
	//entering value of n
	cout<<"How many elements are there? :";
	cin>> n;
	
	//entering values of x
	cout<<"Enter elements : ";
	int i;
	for( i = 0 ; i < n ; i++ ){
		cin>> x [ i ];
	}
	
	//entering values of f
	cout<<"Enter corrosponding frequencies: ";
	for( i = 0 ; i < n ; i++){
		cin>> f [ i ];
	}
	
	//calculating fx
	for( i = 0 ; i < n ; i++ ){
		fx[i] = f [ i ] * x [ i ];
	}
	
	//calculating ΣFx
	int sum_fx = 0;
	for ( i = 0 ; i < n ; i++ ){
		sum_fx = sum_fx + fx [ i ];
	}
	
	//calculating Σf
	int sum_f = 0;
	for( i = 0 ; i < n ; i++ ){
		sum_f = sum_f + f [  i  ] ;
	}
	
	//calculating mean
	float mean=(float) sum_fx / sum_f;
	
	//priting mean
	cout<<"Mean is : "<<mean;
	
	getch();
}
