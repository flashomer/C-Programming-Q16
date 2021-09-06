#include<stdio.h>

int main(){
	
	FILE *scr = fopen("scores.txt","r");
	int team1[50],team2[50],win[100];
	int week=0,score=0,i;

	while(1){
		if(feof(scr)) {  break;}
		fscanf(scr,"%d %d",&team1[week],&team2[week]);
		week++;
	}
	fclose(scr);
		
	for(i=0;i<week;i++){
		
		win[i] = 0;
		if(team1[i]==team2[i]){
			score=score +1;
		}
		else{
			if(team1[i]>team2[i]){
				score=score+3;
				win[i] = 1;
				
			}
			else
			score=score+0;
		}
	}

	
	printf("Total number of weeks is %d \n",week);
	printf("Total points: %d \n",score);
	printf("Games won on weeks ");
	
	for(int k=0; k<week; k++){
		if(win[k] == 1){
			printf("%d ",k+1);
		}
	}
}
