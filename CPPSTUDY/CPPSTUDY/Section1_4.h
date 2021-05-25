#pragma once

#include <iostream>
#include <cstdio>
/*
����� ��Ʈ���� ���� ����

*/
// ������ �̿��� ���, std::�� �Է����� �ʾƵ� ��.
// �����Ϸ��� cout�̳�, cin ���� �߰��ϸ�, �ڵ����� std:: �� ������.
using namespace std; 

int section1_4() {
	// ���ӽ����̽� (�̸� ����)�� �� ���� �Ǹ�, 
	// �� cout, cin�� �� ���� ���� ���� �����ϴ°��̴�.
	// �׷��� ������ �̸� �����Ҷ��� std::�� ���� ::�� ������� �Ѵ�.
	std::cout << "I Love this Lecture!" << std::endl; // end of line

	// ����� ������ �ؽ�Ʈ�� ���´�.

	int x = 1024;
	std::cout << "X is" << x << std::endl; // ������ ���� stream ��.

	double pi = 3.141592;
	std::cout << "Pi is" << pi << std::endl; // ���е��� ��Ʈ���ϴ� �κ��� ���� ���ǵ鿡�� �˷���.

	std::cout << "abc" << "\t" << "dex" << std::endl; // \t�� �ڵ��ٸ����� �Ǵ� �� ������ ����
	std::cout << "ab" << "\t" << "dex" << std::endl; // ������ ����, \t�� �̿��ؼ� �ٸ����� �Ǿ����� Ȯ����.

	// endl�� \n�� ������ ����� ���������� ��������δ� �ٸ��Ƿ� �װͿ� ���� Ȯ���� �ʿ䰡 �ִ�.

	cout << "\a"; // ���� �Ҹ� ���
	printf(""); // ��� ������� �پ��� ����� �ִ�.

	int x = 1;
	cout << "Before Your input, x was" << x << endl;
	// �Է� ���
	// using namespace std;�� ���⿡ std::�� �ʿ����.
	// 
	std::cin >> x; 

	// cin, cout�� �ξ� ���� ����. ���� ����� �Ǵ� ��Ʈ��ŷ���� ����� �����ϴ�.
	cout << "Your input is" << x << endl; 
	return 0;
	
}