#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


int main()

{
	int user=3,computer=3,com_gus,input,i,gus,j,win,turn=0,com,all;

	srand(GetTickCount());

	printf("                                3���� ���൹ ����\n\n");
	printf("                                       ��Ģ\n\n1.����� 3���� ���൹�� �ְ� ��ǻ�͵� 3���� ���൹�� �ֽ��ϴ�.\n\n2.����� 0������ 3�� ���� ���൹�� ���� �ֽ��ϴ�.\n\n3.��ǻ�͵� �ڽ��� ���൹�� ���ϸ� ��Ű� ��ǻ���� ���൹ ������ ����\n������ �����Ͽ� �����ϴ�.\n\n3.���� ����� ������ ����� ���൹�� �Ѱ��� �� �� ��ǻ�Ͱ�\n���� ��� ��ǻ���� ���൹ �Ѱ��� �ܴϴ�.\n\n4.���������� ���൹ 3���� ��� ���� �÷��̾ �̱�ϴ�.\n");

	for(win=0;win!=user||win!=computer;) {


		printf("\n����� �� ���൹ ������ ���ϼ��� : ");
		scanf("%d",&input);

		if(user<input){printf("������ �ʰ���"); for(;;);}

		i = computer;

		com=rand() % i + 0;

		all = com + input;

		printf("\n��ǻ�Ϳ� ����� ���൹�� ���� ������ �����Ͽ� ��������� : ");
		scanf("%d",&gus);

		j=user+computer;

		if(j<gus) {printf("������ �ʰ���"); for(;;);}

		com_gus=rand() % j + 0;
		for(com_gus;com_gus==gus||com>=com_gus||com_gus>=com+3;){
		com_gus=rand() % j + 0;
		}

		printf("\n��ǻ�Ͱ� �� ���൹ ���� : %d\n",com);

		printf("��ǻ�Ͱ� ������ ���� :%d\n",com_gus);

		printf("\n��Ű� ��ǻ���� ���൹�� ���� ���� : %d\n",all);

		if(gus==all) {user--; printf("\nuser win\n");}
		if(com_gus==all) {computer--; printf("\ncomputer win\n"); }

		printf("\n����� ������ �ִ� ���൹ ���� : %d\n",user);
		printf("��ǻ�Ͱ� ������ �ִ� ���൹ ���� : %d\n",computer);
	
		if (user==0) {printf("\n�¸�!\n"); for(;;);}
		if (computer==0) {printf("\n�й�\n"); for(;;);}

		printf("\n����� �� ���൹ ������ ���ϼ��� : ");
		scanf("%d",&input);

		if(user<input){printf("������ �ʰ��ϼ̽��ϴ�."); for(;;);}

		i = computer;
		int com=rand() % i + 0;

		int all = com + input;

		j=user+computer;

		com_gus=rand() % j + 0;
		for(;com>=com_gus||com_gus>=com+3;){
			com_gus=rand() % j + 0;
		}

		printf("\n��ǻ�Ͱ� ������ ���� : %d\n",com_gus);


		printf("\n��ǻ�Ϳ� ����� ���൹�� ���� ������ �����Ͽ� ��������� : ");
		scanf("%d",&gus);

		if(com_gus==gus) {printf("�̹� ��ǻ�Ͱ� ������ ���� �Դϴ�.\n"); for(;;);}

		printf("\n��ǻ�Ͱ� �� ���൹ ���� : %d\n",com);

		printf("��ǻ�Ͱ� ������ ���� :%d\n",com_gus);

		printf("\n��Ű� ��ǻ���� ���൹�� ���� ���� : %d\n",all);


		if(gus==all) {user--; printf("user win\n");}
		if(com_gus==all) {computer--; printf("computer win\n"); }

		printf("\n����� ������ �ִ� ���൹ ���� : %d\n",user);
		printf("��ǻ�Ͱ� ������ �ִ� ���൹ ���� : %d\n",computer);
	
		if (user==0) {printf("\n�¸�!\n"); for(;;);}
		if (computer==0) {printf("\n�й�\n"); for(;;);}
	}
	return 0;
}
