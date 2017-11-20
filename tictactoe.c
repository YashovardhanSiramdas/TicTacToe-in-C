#include <stdio.h>
int main()
{
	char a[3][3];
	int i,j,r=0,c=0,ch,k=0,l,m;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]='_';
			}
		}
	printf("START PLAYING:\nCross goes first\nIn order to input just enter the address of the place. For eg: In order to enter at the middle place, type 22 and press enter.\n");
		for(j=0;j<9;j++){
			for(l=0;l<3;l++){
					for(m=0;m<3;m++){
						printf("%c ",a[l][m]);
						}
				printf("\n");
				}
			r=0;
			if(j%2==0){
				printf("Enter the place you want to input 'X'=");
				scanf("%d",&ch);
				r=ch%10;
				ch=ch/10;
				a[ch-1][r-1]='X';
				c++;
				}
			else{
				printf("Enter the place you want to input 'O'=");
				scanf("%d",&ch);
				r=ch%10;
				ch=ch/10;
				a[ch-1][r-1]='O';
				c++;
				}
			if(c>=5){
				if(a[0][0]==a[0][1] && a[0][0]==a[0][2]){
					printf("YOU WIN!\n");
					k=0;
					break;
					}
				else if(a[0][0]==a[1][0] && a[0][0]==a[2][0]){
					printf("YOU WIN!\n");
					k=0;
					break;
					}
				else if(a[0][0]==a[1][1] && a[0][0]==a[2][2]){
					printf("YOU WIN!\n");
					k=0;
					break;
					}
				else if(a[0][1]==a[1][1] && a[0][1]==a[2][1]){
					printf("YOU WIN!\n");
					k=0;
					break;
					}
				else if(a[0][2]==a[1][2] && a[0][2]==a[2][2]){
					printf("YOU WIN!\n");
					k=0;
					break;
					}
				else if(a[0][2]==a[1][1] && a[0][2]==a[2][0]){
					printf("YOU WIN!\n");
					k=0;
					break;
					}
				else if(a[1][0]==a[1][1] && a[1][0]==a[1][2]){
					printf("YOU WIN!\n");
					k=0;
					break;
					}
				else if(a[2][0]==a[2][1] && a[2][0]==a[2][2]){
					printf("YOU WIN!\n");
					k=0;
					break;
					}
				else{
					k=1;
					}
				}
				else{
					continue;
				}
			}
	if(k==1){
		printf("Match Draw.\n");
		}
	return(0);
}