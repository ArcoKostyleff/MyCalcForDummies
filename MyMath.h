#pragma once

/*


class MyCalc

add
sub
mult
div
*/

// ��������� ��� �������� ���� ����������� �����
// ��� ����
// int int int 
struct Fractional {
	Fractional(int a, int b, int c) {
		zel = a;
		chis = b;
		znam = c;
	}
	Fractional() {
		zel = 0;
		chis = 0;
		znam = 0;
	}
	
	int zel;
	int chis;
	int znam;
	Fractional operator+(Fractional &);
};



//����� MyCalc - ������� �����������
// �������:
// - T Add(T a, T b); - ���������� ��� T 
// - Fractional Add(Frac a, Frac b); ���������� ��� ����� 
class MyCalc {

public:
	template <typename T>
	T Add(T a, T b);
	
	float Add(int a, float b);
	Fractional Add(Fractional a, Fractional b);
	
	/*template <typename T>
	T Sub();
	template <typename T>
	T Mult();
	template <typename T>
	T Div();*/
	

private:


};
