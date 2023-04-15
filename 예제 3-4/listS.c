#include "listS.h"

int insertElement(int L[], int n, int x) {
	int i, k = 0, move = 0;	//move는 자리 이동 횟수 카운터
	//원소의 크기를 비교하여 삽입위치 k 찾기
	for (i = 0; i < n; i++) {
		if (L[i] <= x && x <= L[i + 1]) {		//넣으려는 값이 배열의 앞뒤값의 사이에 있으면
			k = i + 1;							//해당 자리에 넣기
			break;
		}
	}
	if (i == n)		//삽입 원소가 가장 큰 원소인 경우
		k = n;		

	//마지막 원소부터 k+1 원소까지 뒤로 자리 이동
	for (i = n; i > k; i--) {				//k위치에 새로운 값을 넣었으니까 넣은부분 바로 앞 원소들까지
		L[i] = L[i - 1];					//한칸씩 뒤로 밀기
		move++;								//밀때마다 +1씩
	}

	L[k] = x;		//자리 이동하여 만든 자리 k에 삽입 원소 저장
	return move;	//옮긴 횟수
}

int deleteElement(int L[], int n, int x) {
	int i, k = n, move = 0;		//move는 자리이동 횟수 카운터

	//원소의 크기를 비교하여 삭제 위치 k찾기
	for (i = 0; i < n; i++) {
		if (L[i] == x) {				//삭제하려는 값을 배열에서 찾음
			k = i;						//해당 위치를 찾음
			break;
		}
	}
	if (i == n)							//맨 뒤에 있는 원소라면
		move = n;						//이동 횟수는 배열원소의 개수

	//k+1부터 마지막 원소까지 앞으로 자리이동
	for (i = k; i < n - 1; i++) {		
		L[i] = L[i + 1];				//삭제한 원소의 바로 뒤 원소부터 끝까지 앞으로 한칸씩 옮김
		move++;							//옮길때마다 횟수 +1
	}

	return move;

}