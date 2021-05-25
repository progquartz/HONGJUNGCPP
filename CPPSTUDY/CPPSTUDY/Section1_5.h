#pragma once

#include <iostream>

using namespace std;

void print() {
	cout << "Hello" << endl;
}

// 함수는 c에서는 함수 내에서 함수를 정의할 수 없다.
// 두 수를 더해서 함수를 
int AddTwoNumbers(int num_a, int num_b) { // 인수가 2개인 숫자.
	int sum = num_a + num_b; // 리턴 타입을 맞춰주는것.

	return sum;
}

// 곱하기를 위한 함수를 만들기. 함수의 이름을 바꿀때는, 우클릭해서 리팩토링시켜주자.
int MultiplyTwoNumbers(int num_a, int num_b) { // 인수가 2개인 숫자.
	int sum = num_a + num_b; // 리턴 타입을 맞춰주는것.

	return sum;
}

void printHelloWorld() { // 리턴해줄 것이 없을 경우에는 void를 쓴다.
	cout << "Hello World" << endl;

	return; // 리턴문을 만날 경우에는 무조건적으로 함수가 종료된다. 분기문이 없을 경우에는 불가.

	cout << "Hello World2" << endl;
}

int main() { // 함수에서도 함수를 호출할 수 있다.
	cout << MultiplyTwoNumbers(1,2) << endl; // 다음과 같이 패턴을 하고 있었습니다.
	cout << MultiplyTwoNumbers(3,4) << endl; // 다음과 같이 더하기를 함수화 시킬 수 있다.
	cout << MultiplyTwoNumbers(8,13) << endl;
	
	// 만약 디버그로 확인하게 된다면, 함수가 있다면 함수가 있는 위치로 간다.
	// 함수를 실행시켜야 할 때가 오면 함수에도 메모리가 있기 때문에 cpu에서 메모리를 가지고 오는것임.
	// 함수 내의 인수를 내부의 값으로 들어가게 만든다.
	// 만약 함수가 종료되면( 또는 return을 된다면) 리턴값이 생겨나거나, 없다면 다음 함수 바로 다음 줄로 바뀐다.

	int sum = AddTwoNumbers(1, 2); // 값을 받아서 그 값을 초기화시키는 혁명적인 기능.
	
	AddTwoNumbers(1, 2); // 이런것도 가능.

	printHelloWorld();
}