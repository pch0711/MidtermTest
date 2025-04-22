#include <stdio.h>

// PassOrFail 함수: 50점 이상이면 1, 그렇지 않으면 0을 반환
int PassOrFail(int score) {
    if (score >= 50) {
        return 1;  // 재시험 없음
    }
    else {
        return 0;  // 재시험 있음
    }
}

int main() {
    int score;

    // 예상 점수 입력 받기
    printf("예상 점수를 입력하세요: ");
    scanf("%d", &score);

    // PassOrFail 함수 호출하여 점수에 따른 결과 출력
    int result = PassOrFail(score);  // PassOrFail 함수의 반환값을 result에 저장
    if (result == 1) {
        printf("재시험 없습니다!\n");
    }
    else {
        printf("재시험 있습니다!\n");
    }

    return 0;
}