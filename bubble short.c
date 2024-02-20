#include <stdio.h>
#define boyut 5
void bastir(int dizi[]);
void kabarcikSiralama (int dizi[]);

int main(){
	int i;
	int dizi[boyut];
	for( i=0;i<boyut;i++)
	
	dizi[i]=rand()%51;
	bastir(dizi);
	kabarcikSiralama(dizi);
return 0;	
}
	
void kabarcikSiralama ( int dizi[]){
	int i;
	int j;
	 
		for ( i=boyut-1;i>0;i--)
			for(j=0;j<boyut-1;j++ ){
				if(dizi[j]>dizi[j+1]){
					int temp = dizi[j];
					dizi[j]=dizi[j+1];
					dizi[j+1]= temp;
				}
			}
		
		bastir(dizi);
		
		
		
	}
void bastir(int dizi[]){
	int i;
	for(i = 0;i<boyut;i++) 
	printf(" %d\t",dizi[i]);
	printf("\n\n");
}	
	
	
	


