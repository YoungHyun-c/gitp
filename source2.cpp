#include <stdio.h>
#include <string>


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
	
	int betting = 0;
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

	printf("베팅할 말을 선택하세요(1~5) : ");
	scanf_s("%d", &betingmar);
	printf("배팅할 금액을 입력하세요 : ");
	scanf_s("%d", &betting);

	printf("그럼 경기를 시작해볼까요? ^^ \n");
	printf("**************************************************************\n");

	int woon;
	int m = 0;

	
	while (m < 50)
	{
		woon = rand_int(1, 100);
		printf("%d : %d\n",m+1,woon);
		m = m + 1;
	}
	//}
}