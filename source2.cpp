#include <stdio.h>
#include <string>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <Windows.h>

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
	printf("----------------신나는 경마게임-------------------------------\n");
	printf("당신은 10000원의 돈을 가지고 게임을 시작합니다\n");
	printf("당신이 원하는 말에 원하는 만큼 배팅해보아요!\n");
	printf("오늘의 경주마들을 소개 하겠습니다. 각 말마다 상금이 다릅니다!\n");
	printf("-------------------------------------------------------------\n");
	
	int beting = 0;
	int count = 0;
	int betingmar;
	int winmar = 0;

	printf("괄호 안은 배팅 대비 상금 비율입니다.\n");
	printf("배팅액에 0을 입력하시면 모두 초기화되고 처음으로 돌아갑니다.\n");
	printf("**************************************************************\n");
	printf("1번마 - 오늘의 명마 (2배)등급 ★★★★★ \n");
	printf("2번마 - 흑마        (3배)등급 ★★★★\n");
	printf("3번마 - 백마        (5배)등급 ★★★\n");
	printf("4번마 - 조랑말     (10배)등급 ★★\n");
	printf("5번마 - 당나귀     (30배)등급 ★\n");
	printf("**************************************************************\n");

	int mar[5] = { 0 };
	printf("베팅할 말을 선택하세요(1~5) : ");
	scanf_s("%d", &betingmar);
	printf("배팅할 금액을 입력하세요 : ");
	scanf_s("%d", &beting);

	don = don - beting;
	printf("그럼 경기를 시작해볼까요? ^^ \n");
	printf("**************************************************************\n");

	int woon;
	int m = 0;
	
	
	while (m < 40)
	{
		woon = rand_int(1, 100);
		if (woon >= 76) {
			mar[0] = mar[0]++;
			//m = m + 1;
			m = max(mar[0], m);
		}
		else if (woon >= 54) {
			mar[1] = mar[1]++;
			//m = m + 1;
			m = max(mar[1], m);
		}
		else if (woon >= 34) {
			mar[2] = mar[2]++;
			//m = m + 1;
			m = max(mar[2], m);
		}
		else if (woon >= 16) {
			mar[3] = mar[3]++;
			//m = m + 1;
			m = max(mar[3], m);
		}
		else if (woon >= 1) {
			mar[4] = mar[4]++;
			//m = m + 1;
			m = max(mar[4], m);
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
		//cout << "1번마 : *" << jindo[0] << "\n";
		//printf("%d : %d\n",m,woon);
		//m = m + 1;
		printf("게임 현황\n");
		printf("=================================================골인\n");
		cout << "1번마 : *" << jindo[0] << "\n";
		cout << "2번마 : *" << jindo[1] << "\n";
		cout << "3번마 : *" << jindo[2] << "\n";
		cout << "4번마 : *" << jindo[3] << "\n";
		cout << "5번마 : *" << jindo[4] << "\n";
		printf("=================================================골인\n");

		Sleep(10);
		system("cls");
		
		if (m == 40) {
			printf("게임 현황\n");
			printf("=================================================골인\n");
			cout << "1번마 : *" << jindo[0] << "\n";
			cout << "2번마 : *" << jindo[1] << "\n";
			cout << "3번마 : *" << jindo[2] << "\n";
			cout << "4번마 : *" << jindo[3] << "\n";
			cout << "5번마 : *" << jindo[4] << "\n";
			printf("=================================================골인\n");
		}
	}


	if (winmar == betingmar) {
		if (winmar == 1) {
			don = don + 2 * beting;
			printf("당신의 %d 말이 우승했군요! 축하드립니다~! \n", betingmar);
			printf("상금을 더해서 당신의 돈은 * 2배 %d 원이 되었습니다. \n", don);
			printf("\n");
		}
		else if (winmar == 2) {
			don = don + 3 * beting;
			printf("당신의 %d 말이 우승했군요! 축하드립니다~! \n", betingmar);
			printf("상금을 더해서 당신의 돈은 * 3배 %d 원이 되었습니다. \n", don);
			printf("\n");
		}
		else if (winmar == 3) {
			don = don + 5 * beting;
			printf("당신의 %d 말이 우승했군요! 축하드립니다~! \n", betingmar);
			printf("상금을 더해서 당신의 돈은 * 5배 %d 원이 되었습니다. \n", don);
			printf("\n");
		}
		else if (winmar == 4) {
			don = don + 10 * beting;
			printf("당신의 %d 말이 우승했군요! 축하드립니다~! \n", betingmar);
			printf("상금을 더해서 당신의 돈은 * 10배 %d 원이 되었습니다. \n", don);
			printf("\n");
		}
		else if (winmar == 5) {
			don = don + 30 * beting;
			printf("당신의 %d 말이 우승했군요! 축하드립니다~! \n", betingmar);
			printf("상금을 더해서 당신의 돈은 * 30배 %d 원이 되었습니다. \n", don);
			printf("\n");
		}
	}
	else {
		printf("아쉽지만 배팅한 %d번 말이 우승하지 못했군요! 다음엔 승리의 주역이 되실꺼에요~!\n", betingmar);
		printf("우승은 %d 번 말이 우승하였습니다. \n", winmar);
		printf("돈은 배팅금을 잃어서 %d 원이 되었습니다. \n", don);
		printf("\n");
	}

	//}
}