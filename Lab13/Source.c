
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int mn() {
    int sizeS = 40;
    int sizeN = 10;
    printf("Enter your name - ");

    char Name[10];
    char Snew[40] = "Hello";  // �����������
    char Snewprobel[40] = "";  // ��� ����� � ���������

    // ��������� ��� ������������
    scanf("%9s", Name);

    // ��������� ������ � ������ � ���������
    for (int i = 0; Name[i] != '\0'; i++) {
        // �������� �����
        strncat(Snewprobel, &Name[i], 1);
        // ��������� ������ ����� �����
        strcat(Snewprobel, " ");
    }

    // ��������, ������������� �� ������ �� �����
    int length = strlen(Snewprobel);
    if (Snewprobel[length - 1] != '.') {
        // ��������� �����, ���� � ���
        strcat(Snewprobel, ".");
    }
    else {
        // ������� ��������� �����, ���� ��� ��� ����
        Snewprobel[length - 1] = '\0';
    }

    // �������� ������ �����������
    strcat(Snew, ", ");  // ��������� ������� � ������ � �����������
    strcat(Snew, Snewprobel);  // ��������� ��� � ���������

    // �������� ������ � �������� ��������
    for (int i = 0; i < strlen(Snew); i++) {
        Snew[i] = toupper(Snew[i]);
    }

    // ������� ���������
    puts(Snew);

}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int sizeS = 40;
    int sizeN = 10;
    printf("Enter your name - ");

    char Name[10];
    char Snew[40] = "Hello";  // �����������
    char Snewprobel[40] = "";  // ��� ����� � ���������

    // ��������� ��� ������������
    scanf("%9s", Name);

    // ��������� ������ � ������ � ���������
    for (int i = 0; Name[i] != '\0'; i++) {
        // �������� �����
        strncat(Snewprobel, &Name[i], 1);
        // ��������� ������ ����� �����
        strcat(Snewprobel, " ");
    }

    // ��������, ������������� �� ������ �� �����
    int length = strlen(Snewprobel);
    if (Snewprobel[length - 1] != '.') {
        // ��������� �����, ���� � ���
        strcat(Snewprobel, ".");
    }
    else {
        // ������� ��������� �����, ���� ��� ��� ����
        Snewprobel[length - 2] = '\0';
    }

    // �������� ������ �����������
    strcat(Snew, ", ");  // ��������� ������� � ������ � �����������
    strcat(Snew, Snewprobel);  // ��������� ��� � ���������

    // �������� ������ � �������� ��������
    for (int i = 0; i < strlen(Snew); i++) {
        Snew[i] = toupper(Snew[i]);
    }

    // ������� ���������
    puts(Snew);

    return 0;
}