#pragma once

#include <iostream>

using namespace std;

void print() {
	cout << "Hello" << endl;
}

// �Լ��� c������ �Լ� ������ �Լ��� ������ �� ����.
// �� ���� ���ؼ� �Լ��� 
int AddTwoNumbers(int num_a, int num_b) { // �μ��� 2���� ����.
	int sum = num_a + num_b; // ���� Ÿ���� �����ִ°�.

	return sum;
}

// ���ϱ⸦ ���� �Լ��� �����. �Լ��� �̸��� �ٲܶ���, ��Ŭ���ؼ� �����丵��������.
int MultiplyTwoNumbers(int num_a, int num_b) { // �μ��� 2���� ����.
	int sum = num_a + num_b; // ���� Ÿ���� �����ִ°�.

	return sum;
}

void printHelloWorld() { // �������� ���� ���� ��쿡�� void�� ����.
	cout << "Hello World" << endl;

	return; // ���Ϲ��� ���� ��쿡�� ������������ �Լ��� ����ȴ�. �б⹮�� ���� ��쿡�� �Ұ�.

	cout << "Hello World2" << endl;
}

int main() { // �Լ������� �Լ��� ȣ���� �� �ִ�.
	cout << MultiplyTwoNumbers(1,2) << endl; // ������ ���� ������ �ϰ� �־����ϴ�.
	cout << MultiplyTwoNumbers(3,4) << endl; // ������ ���� ���ϱ⸦ �Լ�ȭ ��ų �� �ִ�.
	cout << MultiplyTwoNumbers(8,13) << endl;
	
	// ���� ����׷� Ȯ���ϰ� �ȴٸ�, �Լ��� �ִٸ� �Լ��� �ִ� ��ġ�� ����.
	// �Լ��� ������Ѿ� �� ���� ���� �Լ����� �޸𸮰� �ֱ� ������ cpu���� �޸𸮸� ������ ���°���.
	// �Լ� ���� �μ��� ������ ������ ���� �����.
	// ���� �Լ��� ����Ǹ�( �Ǵ� return�� �ȴٸ�) ���ϰ��� ���ܳ��ų�, ���ٸ� ���� �Լ� �ٷ� ���� �ٷ� �ٲ��.

	int sum = AddTwoNumbers(1, 2); // ���� �޾Ƽ� �� ���� �ʱ�ȭ��Ű�� �������� ���.
	
	AddTwoNumbers(1, 2); // �̷��͵� ����.

	printHelloWorld();
}