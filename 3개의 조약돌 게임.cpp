#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


int main()

{
	int user=3,computer=3,com_gus,input,i,gus,j,win,turn=0,com,all;

	srand(GetTickCount());

	printf("                                3개의 조약돌 게임\n\n");
	printf("                                       규칙\n\n1.당신은 3개의 조약돌이 있고 컴퓨터도 3개의 조약돌이 있습니다.\n\n2.당신은 0개에서 3개 까지 조약돌을 낼수 있습니다.\n\n3.컴퓨터도 자신의 조약돌을 정하면 당신과 컴퓨터의 조약돌 갯수를 더한\n갯수를 추측하여 적습니다.\n\n3.만약 당신이 맞히면 당신은 조약돌이 한개가 줄 고 컴퓨터가\n맞힐 경우 컴퓨터의 조약돌 한개가 줌니다.\n\n4.최종적으로 조약돌 3개를 모두 없앤 플레이어가 이깁니다.\n");

	for(win=0;win!=user||win!=computer;) {


		printf("\n당신이 낼 조약돌 갯수를 정하세요 : ");
		scanf("%d",&input);

		if(user<input){printf("갯수를 초과함"); for(;;);}

		i = computer;

		com=rand() % i + 0;

		all = com + input;

		printf("\n컴퓨터와 당신의 조약돌을 합한 갯수를 추측하여 적어수제요 : ");
		scanf("%d",&gus);

		j=user+computer;

		if(j<gus) {printf("갯수를 초과함"); for(;;);}

		com_gus=rand() % j + 0;
		for(com_gus;com_gus==gus||com>=com_gus||com_gus>=com+3;){
		com_gus=rand() % j + 0;
		}

		printf("\n컴퓨터가 낸 조약돌 갯수 : %d\n",com);

		printf("컴퓨터가 추측한 숫자 :%d\n",com_gus);

		printf("\n당신과 컴퓨터의 조약돌을 합한 숫자 : %d\n",all);

		if(gus==all) {user--; printf("\nuser win\n");}
		if(com_gus==all) {computer--; printf("\ncomputer win\n"); }

		printf("\n당신이 가지고 있는 조약돌 갯수 : %d\n",user);
		printf("컴퓨터가 가지고 있는 조약돌 갯수 : %d\n",computer);
	
		if (user==0) {printf("\n승리!\n"); for(;;);}
		if (computer==0) {printf("\n패배\n"); for(;;);}

		printf("\n당신이 낼 조약돌 갯수를 정하세요 : ");
		scanf("%d",&input);

		if(user<input){printf("갯수를 초과하셨습니다."); for(;;);}

		i = computer;
		int com=rand() % i + 0;

		int all = com + input;

		j=user+computer;

		com_gus=rand() % j + 0;
		for(;com>=com_gus||com_gus>=com+3;){
			com_gus=rand() % j + 0;
		}

		printf("\n컴퓨터가 추측한 숫자 : %d\n",com_gus);


		printf("\n컴퓨터와 당신의 조약돌을 합한 갯수를 추측하여 적어수제요 : ");
		scanf("%d",&gus);

		if(com_gus==gus) {printf("이미 컴퓨터가 선택한 숫자 입니다.\n"); for(;;);}

		printf("\n컴퓨터가 낸 조약돌 갯수 : %d\n",com);

		printf("컴퓨터가 추측한 숫자 :%d\n",com_gus);

		printf("\n당신과 컴퓨터의 조약돌을 합한 숫자 : %d\n",all);


		if(gus==all) {user--; printf("user win\n");}
		if(com_gus==all) {computer--; printf("computer win\n"); }

		printf("\n당신이 가지고 있는 조약돌 갯수 : %d\n",user);
		printf("컴퓨터가 가지고 있는 조약돌 갯수 : %d\n",computer);
	
		if (user==0) {printf("\n승리!\n"); for(;;);}
		if (computer==0) {printf("\n패배\n"); for(;;);}
	}
	return 0;
}
