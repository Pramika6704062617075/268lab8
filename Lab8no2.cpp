#include <stdio.h>        
int checkscore(char std[]);

int main() {
    int i,j;
    int count = 0;   // 
	char s[10];
	
    char ans[8][10]={
        {'A','B','A','C','C','D','E','E','A','D'},
        {'D','B','A','B','C','A','E','E','A','D'},
        {'E','D','D','A','C','B','E','E','A','D'},
        {'C','B','A','E','D','C','E','E','A','D'},
        {'A','B','D','C','C','D','E','E','A','D'},
        {'B','B','E','C','C','D','E','E','A','D'},
        {'B','B','A','C','C','D','E','E','A','D'},
        {'E','B','E','C','C','D','E','E','A','D'}
    };

    char key1 = 'D';   // 

   	for ( i = 0 ; i < 8 ; i++ ){
   		for(j = 0 ; j < 10 ; j++ )
   			s[j] = ans[i][j];

        if(ans[i][0] == key1)   // 
            count++;

   		printf("std %d => %d\n", (i+1), checkscore(s));
	}

    printf("Q1 correct is %d \n", count);
}

int checkscore(char std[]){
	char charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};
	int i , n = 0 ;
	for( i = 0 ; i < 10 ; i++ ){
		if ( std[i] == charkeys[i] ){
			n++ ;
		}
	}
	return n ;
}

