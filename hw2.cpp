#include <iostream>

using namespace std;

int main(){

	int num1, kor1, math1, eng1, num2, kor2, math2, eng2, num3, kor3, math3, eng3;
	double avg1, avg2, avg3, math_avg, kor_avg, eng_avg, sum1, sum2, sum3, math_sum, kor_sum, eng_sum;  // ���� ����

	cout << "��ȣ : ";
	cin >> num1;             // ��ȣ �Է�
	cout << "���� : ";
	cin >> math1;            // �������� �Է�
	cout << "���� : ";
	cin >> eng1;             // �������� �Է�
	cout << "���� : ";
	cin >> kor1;             // �������� �Է�
	sum1=math1+eng1+kor1;
	avg1=sum1/3;             // �л� �հ� �� ��� ���
	cout << num1 << "���� ������ " << sum1
          << "�̸� ����� " << avg1 << "�Դϴ�.\n\n" << endl;   // �л� �հ�,��� ���

	cout << "��ȣ : ";
	cin >> num2;             // ��ȣ �Է�
	cout << "���� : ";
	cin >> math2;            // �������� �Է�
	cout << "���� : ";
	cin >> eng2;             // �������� �Է�
	cout << "���� : ";
	cin >> kor2;             // �������� �Է�
	sum2=math2+eng2+kor2;
	avg2=sum2/3;             // �л� �հ� �� ��� ���
	cout << num2 << "���� ������ " << sum2
          << "�̸� ����� " << avg2 << "�Դϴ�.\n\n" << endl;   // �л� �հ�,��� ���

	cout << "��ȣ : ";
	cin >> num3;             // ��ȣ �Է�
	cout << "���� : ";
	cin >> math3;            // �������� �Է�
	cout << "���� : ";
	cin >> eng3;             // �������� �Է�
	cout << "���� : ";
	cin >> kor3;             // �������� �Է�
	sum3=math3+eng3+kor3;
	avg3=sum3/3;             // �л� �հ� �� ��� ���
	cout << num3 << "���� ������ " << sum3
          << "�̸� ����� " << avg3 << "�Դϴ�.\n\n" << endl;   // �л� �հ�,��� ���

	math_sum=math1+math2+math3;
	math_avg=math_sum/3;
	kor_sum=kor1+kor2+kor3;
	kor_avg=kor_sum/3;
	eng_sum=eng1+eng2+eng3;
	eng_avg=eng_sum/3;             // �� ���� ����, ��� ���

	cout << "������ �� ������ " << math_sum
          << "�̸� ����� " << math_avg << "�Դϴ�." << endl;
	cout << "������ �� ������ " << eng_sum
          << "�̸� ����� " << eng_avg << "�Դϴ�." << endl;
	cout << "������ �� ������ " << kor_sum
          << "�̸� ����� " << kor_avg << "�Դϴ�." << endl;    // �� ���� ����, ��� ���
	
	return 0;

}