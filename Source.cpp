#include<iostream>
int recurs(int a, int b, int count) {
	int widht = a, height = b;//����������� ������ � ������ ��������������� ����������
	if (widht > 0 && height > 0) {//���� ������ � ������ ������ ���� ��������� ���� ����
		if (widht < height) {//���� ������ > ������
			return recurs(height, widht, count);//������ �� �������
		}
		else {//����� ��������� ���� ����
			widht -= height;//��������� ������ �� �������� ������
			count++;//����������� �������
			return recurs(widht, height, count);//��������� ���������

		}
	}
	else {//���� ������ ��� ������  = 0 - ���������� ���������� 
		return count;// ���������� �������� ��������
	}

}

int main()
{
	int xpr = 8, ypr = 5;//xpr - ������ ��������������, ypr - ������
	int count = 0, rez;//count - �������, rez - ��������� �� ������
	rez = recurs(xpr, ypr, count);
	printf("%i", rez);
	return 0;
}