#include "MyMath.h"

Fractional Fractional::operator +(Fractional &other) {
	return Fractional(zel + other.zel, chis + other.chis, znam + other.znam);
}

// Функция Add
// складывает дял T обьекта ы
template <typename T>
T MyCalc::Add(T a, T b) {
	return a + b;
}

float MyCalc::Add(int a, float b) {
	return (float)a + b;
}

Fractional MyCalc::Add(Fractional a, Fractional b) {
	Fractional res;
	int currZnamen = a.znam * b.znam;
	a.chis += a.zel * a.znam;
	b.chis += b.zel * b.znam;
	a.chis *= b.znam;
	b.chis *= a.znam;
	res.chis = a.chis + b.chis;
	res.znam = currZnamen;
	res.zel = res.chis / res.znam;
	res.chis -= res.zel*res.znam;
	return res;
}