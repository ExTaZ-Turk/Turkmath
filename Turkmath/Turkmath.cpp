#include "Turkmath.h"
#include <iostream>
using namespace std;

int topla(int a, int b){
	return a + b ;
}
int çıkar(int a, int b){
	return a - b;
}
int çarp(int a , int b){
	return a * b;
}
int böl(int a, int b) {
	if (b == 0) return -1;
	return a / b;
}

int üs(int a, int b) {
    int sonuc = 1;
    for(int i = 0; i < b; ++i) {
        sonuc *= a;
    }
    return sonuc;
}
int faktor(int a){
	int cevap = 1;
	for(int i = 1; i <= a ; ++i){
		cevap = cevap * i;
	}
	return cevap;
}
int neg(int a){
	return -a;
}
double karekok(double x) {
	if (x < 0){
		return -1;
	}
	else{
    double tahmin = x / 2.0;
    double epsilon = 0.00001;

    while ((tahmin * tahmin - x) > epsilon || (tahmin * tahmin - x) < -epsilon) {
        tahmin = (tahmin + x / tahmin) / 2.0;
    }

    return tahmin;
	}
}
int mutlak(int a){
	if(a > 0){
		return a;
	}
	else{
		return -a;
	}
}
int ebob(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int ekok(int a, int b) {
    return (a * b) / ebob(a, b);
}
int mod(int a, int b) {
    if (b == 0) return -1;
    int sonuc = a % b;
    if (sonuc < 0) sonuc += b;
    return sonuc;
}
int fibonacci(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, toplam;

    for (int i = 2; i <= n; ++i) {
        toplam = a + b;
        a = b;
        b = toplam;
    }

    return b;
}
