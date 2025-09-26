#include <stdio.h> // ǥ�� ����� ��� ����

// 5x4 ������ ������ ���� ���� (1�� ä���, 0�� ����)
int zero[20] =
{
    1, 1, 1, 1,
    1, 0, 0, 1,
    1, 0, 0, 1,
    1, 0, 0, 1,
    1, 1, 1, 1
};

int one[20] =
{
    0, 0, 1, 0,
    0, 0, 1, 0,
    0, 0, 1, 0,
    0, 0, 1, 0,
    0, 0, 1, 0
};

int two[20] =
{
    1, 1, 1, 1,
    0, 0, 0, 1,
    1, 1, 1, 1,
    1, 0, 0, 0,
    1, 1, 1, 1
};

int three[20] =
{
    1, 1, 1, 1,
    0, 0, 0, 1,
    1, 1, 1, 1,
    0, 0, 0, 1,
    1, 1, 1, 1
};

int four[20] =
{
    1, 0, 0, 1,
    1, 0, 0, 1,
    1, 1, 1, 1,
    0, 0, 0, 1,
    0, 0, 0, 1
};

int five[20] =
{
    1, 1, 1, 1,
    1, 0, 0, 0,
    1, 1, 1, 1,
    0, 0, 0, 1,
    1, 1, 1, 1
};

int six[20] =
{
    1, 0, 0, 0,
    1, 0, 0, 0,
    1, 1, 1, 1,
    1, 0, 0, 1,
    1, 1, 1, 1
};

int seven[20] =
{
    1, 1, 1, 1,
    0, 0, 0, 1,
    0, 0, 0, 1,
    0, 0, 0, 1,
    0, 0, 0, 1
};

int eight[20] =
{
    1, 1, 1, 1,
    1, 0, 0, 1,
    1, 1, 1, 1,
    1, 0, 0, 1,
    1, 1, 1, 1
};

int nine[20] =
{
    1, 1, 1, 1,
    1, 0, 0, 1,
    1, 1, 1, 1,
    0, 0, 0, 1,
    0, 0, 0, 1
};

// �Լ� ������Ÿ��
void number_check(int k, int i);
void digit_print(int dim[], int line);

int main(void)
{
    int num, line;
    
    printf("������ ���� ��� ���α׷�\n");
    printf("1 �̻��� ������ �Է��մϴ�. \n\n");
    printf("\n���� �����Է� �� Enter> ");
    scanf("%d", &num);
    printf("\n\n");

    // 0����� 4����� 5���� �ݺ��ϸ� ���
    for (line = 0; line <= 4; line++)
    {
        number_check(num, line);
        printf("\n"); // �� �� ��� �� �� �ٲ�
    }
    
    return 0;
}

// ���� ������ ���� ����� �� �྿ ����ϴ� �Լ�
void digit_print(int dim[], int line)
{
    int i;
    // �ش� ���� 4�� ���(��) ���
    for (i = line * 4; i <= line * 4 + 3; i++)
    {
        if (dim[i] == 1)
            printf("��"); // ä��� ���
        else
            printf(" ");  // ���� ���
    }
    printf(" "); // ���� ���� ����
}

// �Է¹��� ���ڸ� ���� �ڸ������� ��������� Ȯ���ϰ� ����ϴ� �Լ�
void number_check(int k, int i)
{
    if (k >= 1)
    {
        // ��� ȣ��� ���� ���� �ڸ������� �̵�
        number_check(k / 10, i);
        
        // ���� �ڸ������� ���ʷ� ��� (��� ȣ���� ���� ���� �̿�)
        switch (k % 10)
        {
            case 0 : digit_print(zero, i); break;
            case 1 : digit_print(one, i); break;
            case 2 : digit_print(two, i); break;
            case 3 : digit_print(three, i); break;
            case 4 : digit_print(four, i); break;
            case 5 : digit_print(five, i); break;
            case 6 : digit_print(six, i); break;
            case 7 : digit_print(seven, i); break;
            case 8 : digit_print(eight, i); break;
            case 9 : digit_print(nine, i); break;
        }
    }
}
