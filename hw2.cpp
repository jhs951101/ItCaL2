#include <iostream>

using namespace std;

int main(){

	int num1, kor1, math1, eng1, num2, kor2, math2, eng2, num3, kor3, math3, eng3;
	double avg1, avg2, avg3, math_avg, kor_avg, eng_avg, sum1, sum2, sum3, math_sum, kor_sum, eng_sum;  // 변수 선언

	cout << "번호 : ";
	cin >> num1;             // 번호 입력
	cout << "수학 : ";
	cin >> math1;            // 수학점수 입력
	cout << "영어 : ";
	cin >> eng1;             // 영어점수 입력
	cout << "국어 : ";
	cin >> kor1;             // 국어점수 입력
	sum1=math1+eng1+kor1;
	avg1=sum1/3;             // 학생 합계 및 평균 계산
	cout << num1 << "번의 총점은 " << sum1
          << "이며 평균은 " << avg1 << "입니다.\n\n" << endl;   // 학생 합계,평균 출력

	cout << "번호 : ";
	cin >> num2;             // 번호 입력
	cout << "수학 : ";
	cin >> math2;            // 수학점수 입력
	cout << "영어 : ";
	cin >> eng2;             // 영어점수 입력
	cout << "국어 : ";
	cin >> kor2;             // 국어점수 입력
	sum2=math2+eng2+kor2;
	avg2=sum2/3;             // 학생 합계 및 평균 계산
	cout << num2 << "번의 총점은 " << sum2
          << "이며 평균은 " << avg2 << "입니다.\n\n" << endl;   // 학생 합계,평균 출력

	cout << "번호 : ";
	cin >> num3;             // 번호 입력
	cout << "수학 : ";
	cin >> math3;            // 수학점수 입력
	cout << "영어 : ";
	cin >> eng3;             // 영어점수 입력
	cout << "국어 : ";
	cin >> kor3;             // 국어점수 입력
	sum3=math3+eng3+kor3;
	avg3=sum3/3;             // 학생 합계 및 평균 계산
	cout << num3 << "번의 총점은 " << sum3
          << "이며 평균은 " << avg3 << "입니다.\n\n" << endl;   // 학생 합계,평균 출력

	math_sum=math1+math2+math3;
	math_avg=math_sum/3;
	kor_sum=kor1+kor2+kor3;
	kor_avg=kor_sum/3;
	eng_sum=eng1+eng2+eng3;
	eng_avg=eng_sum/3;             // 각 과목 총점, 평균 계산

	cout << "수학의 총 점수는 " << math_sum
          << "이며 평균은 " << math_avg << "입니다." << endl;
	cout << "영어의 총 점수는 " << eng_sum
          << "이며 평균은 " << eng_avg << "입니다." << endl;
	cout << "국어의 총 점수는 " << kor_sum
          << "이며 평균은 " << kor_avg << "입니다." << endl;    // 각 과목 총점, 평균 출력
	
	return 0;

}