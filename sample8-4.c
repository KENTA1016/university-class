#include <stdio.h>

int main(void){
	int i,j;
	int a[3][3]={0};		/*�s��A�̊e�v�f�B�Ƃ肠����0�ŏ�����*/
	int b[3][3]={0};		/*�s��B�̊e�v�f�B�Ƃ肠����0�ŏ�����*/
	int c[3][3]={0};		/*�s��A��B�̘a�A�s��C�̊e�v�f�B�Ƃ肠����0�ŏ�����*/

	/*�s��A�̊e�v�f����͂���*/
	printf("3�s3��̍s��A�̊e�v�f����͂��Ă��������F\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("A[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	/*�s��B�̊e�v�f����͂���*/
	printf("3�s3��̍s��B�̊e�v�f����͂��Ă��������F\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("B[%d][%d]=",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}

	/*��ʏ�ɍs��A��\��*/
	printf("�s��A�F\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}

	/*��ʏ�ɍs��B��\��*/
	printf("�s��B�F\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}

	/*�s��A��B�̘a�A�s��C�̌v�Z�A��ʏ�ɍs��C��\��*/
	printf("�s��A��B�̐ρF\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			c[i][j] = a[i][j] * b[i][j];
			printf("%5d", c[i][j]);
		}
		printf("\n");
	}

	return(0);
}