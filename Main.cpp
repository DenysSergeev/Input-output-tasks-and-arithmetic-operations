#include<iostream>
#include<Windows.h>
#include<cmath>
using namespace std;

int main()
{	
	// A) Hypotenuse
	/* ���� ��� ����� a � b. ������� ���������� ������������ � ��������� ��������.
	������� ������:
	� ���� ������� �������� ��� ����� (����� �����,�������������, �� ��������� 1000).
	�������� ������:
	�������� ����� �� ������. */

	/* double a;
	double b;
	double c;

	cout << "Enter leg a: ";
	cin >> a;
	cout << "Enter leg b: ";
	cin >> b;

	c = sqrt(a * a + b * b);

	cout << "Hypotenuse c = " << c << endl; */



	// B) Previous and Next
	/* �������� ���������, ������� ��������� ����� ����� � ������� �����, ����������� ������������ � �������. 
	�������, ����� ����������, ��������� � �������� ����� �����!
	������� ������:
	�������� ����� �����, �� ������ �� ������������� 10000.
	�������� ������:
	�������� ������� ����� "The next number for the number ", ����� ��������� �����, ����� ����� " is ", ���������� ���������, 
	����� ������� ��� ���������� �� ��������� �����, �������, ���� ����� ��� �������. ���������� � ��������� ������ ��� ����������� �����. 
	��� ������������� ����������� �������� ������ sep � ����� Python. */

	/* int res, previous, next;

	cout << "Enter your number: ";
	cin >> res;
	next = res + 1;
	previous = res - 1;

	cout << "The next number for the number " << res << " is " << next << endl;
	cout << "The previous number for the number " << res << " is " << previous << endl; */



	// C) Apples (part 1)
	/* N ���������� ����� K ����� �������, ����������� ������� �������� � ��������.������� ����� ���������� ������� ��������� ?
	������� ������:
	��������� �������� �� ���� ����� N � K.
	�������� ������:
	��������� ������ ������� ������� ���������� �����. */

	/* int n, k, children;

	cout << "How many schoolchildrens: ";
	cin >> n;
	cout << "How many apples: ";
	cin >> k;

	children = k / n;
	cout << "Every schoolchildren WIN: " << basket << endl; */



	// D) Apples (part 2)
	/* N ���������� ����� K ����� �������, ����������� ������� �������� � ��������.������� ����� ��������� � �������� ?
	������� ������:
	��������� �������� �� ���� ����� N � K.
	�������� ������:
	��������� ������ ������� ������� ���������� �����. */

	/* int n, k, basket;

	cout << "How many schoolchildrens: ";
	cin >> n;
	cout << "How many apples: ";
	cin >> k;

	basket = k - ((k / n) * n);
	cout << "Every schoolchildren WIN: " << basket << endl; */



	// E) MKAD
	/* ����� ���������� ��������� ������������� ������ �109 ����������. 
	������ ���� �������� � �������� ��������� ���� � ���� �� ��������� v ���������� � ���. 
	�� ����� ������� �� ����������� ����� t �����?
	������� ������:
	��������� �������� �� ���� �������� v � t. ���� v>0, �� ���� �������� � ������������� ����������� �� ����, 
	���� �� �������� v<0, �� � �������������.

	�������� ������:
	��������� ������ ������� ����� ����� �� 0 �� 108 � ����� �������, �� ������� ����������� ����. */

	/* int v, t;
	int s = 109;
	cout << "Enter bike's speed: ";
	cin >> v;
	cout << "Enter time: ";
	cin >> t;
	cout << "Check point: " << (s + (v * t % s)) % s; */



	// F) Last NUMBER
	/* ���� ����������� �����.�������� ��� ��������� �����.
	������� ������:
	�������� ����������� �����.
	�������� ������:
	�������� ����� �� ������. */

	/* int a, b;
	cout << "Enter random number: ";
	cin >> a;
	
	b = a % 10;

	cout << "Last number is: " << b; */



	/*G) ����� �������� ����������� �����
	���� ���������� �����. ������� ����� �������� � ���.
	������� ������:
	�������� ����������� �����.
	�������� ������:
	�������� ����� �� ������. */
	
	/* int x, y;
	cout << "Enter random two-digit number: ";
	cin >> x;
	y = x / 10;
	cout << "Two-digit number is: " << y; */



	/* H) ����� ��������
	���� ��������������� ����� �����. ������� ����� �������� � ��� ���������� ������ (�� ���� ������ ������ ����� ��� ���������� ������).
	������� ������:
	�������� ��������������� ����� �����.
	�������� ������:
	�������� ����� �� ������. */

	/* int x, y;
	cout << "Enter random non-negative number: ";
	cin >> x;
	y = x % 100 / 10;
	cout << "Number is: " << y; */

	

	/* I) ����� ����
	���� ����������� �����. ������� ����� ��� ����.
	������� ������:
	�������� ����������� �����.
	�������� ������:
	�������� ����� �� ������. */

	/* int x, y, z;
	cout << "Enter random number: ";
	cin >> x;
	y = (x % 10) + (x % 100 / 10) + (x / 100);
	cout << "Sum all numbers are: " << y; */


	
	/* J) ��������� ������
	���� ����� ����� n. �������� ��������� �� ��� ������ �����. ��� ������� ���� ������ ������ ������������ �������� ���������� if � �����.
	������� ������:
	�������� ����������� �����.
	�������� ������:
	�������� ����� �� ������. */

	/* int n, x;
	cout << "Enter your integer number: ";
	cin >> n;
	x = n + 2;
	cout << "Next even number is: " << x; */



	/* K) ����������� ���� - 1
	���� ����� n. ������� ����� ������ n �����. ����������, ������� ����� � ����� ����� ���������� ����������� ���� � ���� ������. 
	��������� ������ ������� ��� �����: ���������� ����� (�� 0 �� 23) � ���������� ����� (�� 0 �� 59). 
	������, ��� ����� n ����� ���� ������, ��� ���������� ����� � ������.
	������� ������:
	�������� ����� ����� n.
	�������� ������:
	�������� ����� �� ������. */

	/* int n, hours, minutes;
	cout << "Enter number: ";
	cin >> n;

	hours = n % (24 * 60) / 60;
	minutes = n % (24 * 60) % 60;

	cout << hours << " : " << minutes; */
	

	
	/* L) ����������� ���� - 2
	����������� ���� ���������� ����� � ������� h:mm:ss, �� ���� ������� ������������ ���������� �����, ����� ����������� ���������� ���������� �����,
	����� ����������� ���������� ���������� ������. ���������� ����� � ������ ��� ������������� ����������� �� ����������� ����� ������.
	� ������ ����� ������ n ������. ��������, ��� ������� ����.
	������� ������:
	�������� ����� ����� n.
	�������� ������:
	�������� ����� �� ������, �������� ��������� ������. */

	/* int n, hours, minutes, seconds;
	cout << "Enter number: ";
	cin >> n;

	hours = n / 3600; 
	minutes = n / 60 % 60; 
	seconds = n % 60; 
	cout << hours % 24 << ":" << minutes / 10 << minutes % 10 << ":" << seconds / 10 << seconds % 10; */



	/* M) ����� ��������
	�������� ���������, ������� ��������� �������� ���� ������������� ���������� a � b, 
	����� ������ �� �������� ������� (�� ���� � ���������� a ������ ���� �������� ��, ��� ������ ��������� � b, � � ���������� b �������� ��, ��� ������ ��������� � a).
	����� �������� �������� ����������.
	������� ������:
	�������� ����� ����� a � b.
	�������� ������:
	�������� ����� �� ������.
	����������:
	�������� ������ �� �������� ����� ���:

	a = input ()
	b = input ()
	print (b, a)
	�� ����  ���� ��������� ������ ����� �������� ����� ���:
	a = input ()
	b = input ()
	# �������� ����
	# ���� ���
	print (a, b)  */

	/* int a, b, c;
	
	cout << "Enter TWO values: ";

	if (cin >> a >> b) {
		cout << "Original values: a = " << a << ", b = " << b << endl;
		int temp = a;
		a = b;
		b = temp;
		cout << "After swapping: a = " << a << ", b = " << b << endl;
	}
	else {
		cout << "Unexpected error occured" << endl;
	} */
	


	/* N) ����� ������
	� ��������� ����� ������� ���������� � 9:00. ����������������� ����� � 45 �����, ����� 1-��, 3-��, 5-�� � �.�. ������ �������� 5 �����, � ����� 2-��, 4-��, 6-�� � �.�. � 15 �����. 
	����������, ����� ������������� ��������� ����.
	������� ������:
	��� ����� ����� (����� �� 1 �� 10).
	�������� ������:
	�������� ��� ����� �����: ����� ��������� ����� � ����� � �������. ��� ������� ���� ������ ������ ������������ ������� � ��������� ������������. */

	/* int lessonNumber, hours, minutes;
	cout << "Enter lesson number: ";
	cin >> lessonNumber;
	hours = lessonNumber * 45 + lessonNumber / 2 * 5 + (lessonNumber - 1) / 2 * 15;
	minutes = hours % 60;
	cout << "Start at: " << 9 + hours / 60 << " hour " << minutes << " minutes" << endl; */



	/* O) ��������� �������
	������� � �������� ����� a ������ � b ������. ����������, ������� ������ � ������ ����� ��������� �� n ��������.
	������� ������:
	��������� �������� �� ���� ��� �����: a, b, n.
	�������� ������:
	��������� ������ ������� ��� �����: ��������� ������� � ������ � ��������. */

	/*  int a, b, n, sum;
	cout << "How much RUB: ";
	cin >> a;
	
	cout << "How much coins: ";
	cin >> b;
	
	cout << "How many pancakes: ";
	cin >> n;
	
	sum = (a * 100 + b) * n; //������� � �������� �������� �� ������������ ���������� ��������
	cout << "TOTAL: " << sum / 100 << " " << sum % 100; //�� ���������� ������ ����������� ���������� RUB p/100  � � ������� ������� �� ������ ������� ���������� ������ p%100.
    */



	/* P) �������� ������
	���� �������� ���� �������� �������, ������������� ����� � ��� �� ������: ����, ������ � ������� ��� ������� �� �������� �������. 
	��������, ��� ������ ������ ������� �������� �� ������ �������. ����������, ������� ������ ������ ����� ����� ��������� �������.
	������� ������:
	��������� �� ���� �������� ��� ����� ����� � ����, ������, �������, �������� ������ ������ ������� � ��� ����� �����, �������� ������ ������ �������.
	�������� ������:
	�������� ����� ������ ����� ����� ��������� �������. */

	/* int h1, m1, s1, h2, m2, s2;
	cout << "Enter hours, minutes, seconds for FIRST time: " << endl;
	cin >> h1 >> m1 >> s1;

	cout << "Enter hours, minutes, seconds for SECOND time: " << endl;
	cin >> h2 >> m2 >> s2;

	cout << "Number in between: " << (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1); */



	/* Q) ����������
	�� ���� ������ ��������� n ����������. ������� ���� �����, ����� �������� ������� ������ m ����������?
	��� ������� ���� ������ ������ ������������ �������� ����������� if � �������.
	������� ������:
	��������� �������� �� ���� ����������� ����� n � m, �� ������������� 10000.
	�������� ������:
	�������� ����� �� ������. */

	/* int n, m;

	cout << "How many KM in a day: \n";
	cin >> n;
	cout << "How long this distance: \n";
	cin >> m;

	cout << (m / n + (m % n != 0)); */



	/* R) ����� ����� - 3
	n ���������� ����� k ����� ��������, �� ���� ���, ����� ���������� �����, ����������� ����� ���� ����������, ���������� �� �� �����, ��� �� 1.
	������� ������
	��������� �������� �� ���� ����� n � k.
	�������� ������:
	��������� ������ ������� ���������� ����������, ������� ���������� ����� ������, ��� ��������� �� �� ���������.
	����������:
	��� ������� ���� ������ ������ ������������ �������� ����������� if � �������. */

	/* int n, k, x;
	cout << "How many schoolchildrens: " << endl;
	cin >> n;

	cout << "How many Apples: " << endl;
	cin >> k;

	x = (n - k % n) % n;
	cout << x << " childrens have less apples then other"; */



	/* S) ������
	������ ����� �� ������������� ����� ������� h ������, ���������� �� ���� �� a ������, � �� ���� ��������� �� b ������.
	�� ����� ���� ������ ������� �� ������� �����?
	������� ������:
	��������� �������� �� ���� ����������� ����� h, a, b. �������������, ��� a>b.
	�������� ������:
	��������� ������ ������� ���� ����������� �����.
	����������:
	��� ������� ���� ������ ������ ������������ �������� ����������� if � �������. */

	/* int h, a, b, x;
	cout << "Enter heiht: ";
	cin >> h;

	cout << "Enter: How many meters UP: ";
	cin >> a;

	cout << "Enter: How many meters DOWN: ";
	cin >> b;

	x = (1 + (h - b - 1) / (a - b));
	cout << x << " days"; */



	/* T) ������������ �����
	���� �������������� �����. ����������, �������� �� ��� ���������� ������ ������������. ���� ����� ������������, �� �������� 1, ����� �������� ����� ������ ����� �����. 
	����� ����� ����� ������ ������� ������, ����� ����� �������, ��� ��� ���������� ������ ����������� ����� ����������� ������.
	��� ������� ���� ������ ������ ������������ �������� ����������� if � �������
	������� ������:
	�������� �������������� �����.
	�������� ������:
	�������� ����� �� ������. */
	
	/* int n;

	cout << "Enter 4 digit number: ";
	cin >> n;

	int p1, p2;

	p1 = n / 100;
	p2 = n % 100;

	p2 = p2 % 10 * 10 + p2 / 10;

	cout << "Answer: " << (p2 - p1) + 1 << endl; */



	/* U) ��������� ���������
	���� ��� ����������� ����� n � m. ���� ���� �� ��� ������� �� ������ ������, �������� 1, ����� �������� ����� ������ ����� �����.
	������� ������:
	�������� ��� ����������� ����� n � m.
	�������� ������:
	�������� ����� �� ������. */

	/* int n, m, x;
	cout << "Enter FIRST number: ";
	cin >> n;
	cout << "Enter SECOND number: ";
	cin >> m;
	
	if (n % m == 0 || m % n == 0)
		cout << 1;
	else
		cout << 0; */



	/* V) ��������
	�������� ���������, ������� ��������� ��� ����� ����� a � b � ������� ���������� �������� �� ���. ����� � ����� �� 1 �� 1000.
	��� ������� ������ ����� ������������ ������ �������������� ��������������� ���������� +, -, *, //, %, =. 
	������ ������������ ����������� �������������: �����������, �������, ��������� ���������� ������, ���������� ����������� �����.
	������������� ������� max ���������!
	������� ������:
	�������� ��� ����� ����� a � b.
	�������� ������:
	�������� ����� �� ������. */
	
	int a, b;
	
	cout << "Enter FIRST number: ";
	cin >> a;
	cout << "Enter SECOND number: ";
	cin >> b;

	cout << "ANSWER: " << (a * (a / b) + b * (b / a)) / (b / a + a / b);

	cout << endl;
	return 0;
}