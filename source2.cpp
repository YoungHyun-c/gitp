#include <stdio.h>
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

int rand_int(int a, int b) {
	int ret = 0;
	int temp_1 = rand();
	int temp_2 = b - a + 1;
	ret = a + (temp_1 % temp_2);
	return ret;
}
int main() {
	//while (1) {
	int don = 10000;
	printf("----------------�ų��� �渶����-------------------------------\n");
	printf("����� 10000���� ���� ������ ������ �����մϴ�\n");
	printf("����� ���ϴ� ���� ���ϴ� ��ŭ �����غ��ƿ�!\n");
	printf("������ ���ָ����� �Ұ� �ϰڽ��ϴ�. �� ������ ����� �ٸ��ϴ�!\n");
	printf("-------------------------------------------------------------\n");
	
	int betting = 0;
	int count = 0;
	int betingmar;
	int winmar = 0;

	printf("��ȣ ���� ���� ��� ��� �����Դϴ�.\n");
	printf("���þ׿� 0�� �Է��Ͻø� ��� �ʱ�ȭ�ǰ� ó������ ���ư��ϴ�.\n");
	printf("**************************************************************\n");
	printf("1���� - ������ �� (2��)��� �ڡڡڡڡ� \n");
	printf("2���� - �渶        (3��)��� �ڡڡڡ�\n");
	printf("3���� - �鸶        (5��)��� �ڡڡ�\n");
	printf("4���� - ������     (10��)��� �ڡ�\n");
	printf("5���� - �糪��     (30��)��� ��\n");
	printf("**************************************************************\n");

	int mar[5] = { 0 };
	printf("������ ���� �����ϼ���(1~5) : ");
	scanf_s("%d", &betingmar);
	printf("������ �ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &betting);

	printf("�׷� ��⸦ �����غ����? ^^ \n");
	printf("**************************************************************\n");

	int woon;
	int m = 0;

	
	while (m < 50)
	{
		woon = rand_int(1, 100);
		if (woon >= 76) {
			mar[0] = mar[0]++;
			m = m + 1;
		}
		else if (woon >= 54) {
			mar[1] = mar[1]++;
			m = m + 1;
		}
		else if (woon >= 34) {
			mar[2] = mar[2]++;
			m = m + 1;
		}
		else if (woon >= 16) {
			mar[3] = mar[3]++;
			m = m + 1;
		}
		else if (woon >= 1) {
			mar[4] = mar[4]++;
			m = m + 1;
		}
		string jindo[5];
		int i, j;
		for (i = 0; i < 5; i++) {
			for (j = 0; j<mar[i]; j++){
				jindo[i] += "*";
				if (mar[i] == m) {
					winmar = i + 1;
				}
			}
		}
		//cout << "1���� : *" << jindo[0] << "\n";
		//printf("%d : %d\n",m,woon);
		//m = m + 1;
		printf("���� ��Ȳ\n");
		printf("=================================================\n");
		cout << "1���� : *" << jindo[0] << "\n";
		cout << "2���� : *" << jindo[1] << "\n";
		cout << "3���� : *" << jindo[2] << "\n";
		cout << "4���� : *" << jindo[3] << "\n";
		cout << "5���� : *" << jindo[4] << "\n";
		printf("=================================================\n");
	}
	//}
}