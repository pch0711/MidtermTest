#include <stdio.h>

// PassOrFail �Լ�: 50�� �̻��̸� 1, �׷��� ������ 0�� ��ȯ
int PassOrFail(int score) {
    if (score >= 50) {
        return 1;  // ����� ����
    }
    else {
        return 0;  // ����� ����
    }
}

int main() {
    int score;

    // ���� ���� �Է� �ޱ�
    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &score);

    // PassOrFail �Լ� ȣ���Ͽ� ������ ���� ��� ���
    int result = PassOrFail(score);  // PassOrFail �Լ��� ��ȯ���� result�� ����
    if (result == 1) {
        printf("����� �����ϴ�!\n");
    }
    else {
        printf("����� �ֽ��ϴ�!\n");
    }

    return 0;
}