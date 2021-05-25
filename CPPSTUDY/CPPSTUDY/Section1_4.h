#pragma once

#include <iostream>
#include <cstdio>
/*
입출력 스트림에 대해 배우기

*/
// 다음을 이용할 경우, std::을 입력하지 않아도 됨.
// 컴파일러가 cout이나, cin 등을 발견하면, 자동으로 std:: 를 붙혀줌.
using namespace std; 

int section1_4() {
	// 네임스페이스 (이름 공간)은 잘 몰라도 되며, 
	// 이 cout, cin은 이 네임 공간 내에 존재하는것이다.
	// 그렇기 때문에 이를 정의할때는 std::와 같이 ::을 붙혀줘야 한다.
	std::cout << "I Love this Lecture!" << std::endl; // end of line

	// 빌드시 다음의 텍스트가 나온다.

	int x = 1024;
	std::cout << "X is" << x << std::endl; // 다음과 같이 stream 씀.

	double pi = 3.141592;
	std::cout << "Pi is" << pi << std::endl; // 정밀도를 컨트롤하는 부분은 다음 강의들에서 알려줌.

	std::cout << "abc" << "\t" << "dex" << std::endl; // \t는 자동줄맞춤이 되는 빈 공간을 넣음
	std::cout << "ab" << "\t" << "dex" << std::endl; // 다음과 같이, \t를 이용해서 줄맞춤이 되었음을 확인함.

	// endl과 \n은 유사한 기능을 수행하지만 결론적으로는 다르므로 그것에 대해 확인할 필요가 있다.

	cout << "\a"; // 에러 소리 출력
	printf(""); // 출력 방법에는 다양한 방법이 있다.

	int x = 1;
	cout << "Before Your input, x was" << x << endl;
	// 입력 대기
	// using namespace std;를 썻기에 std::가 필요없음.
	// 
	std::cin >> x; 

	// cin, cout은 훨씬 쓸모가 많다. 파일 입출력 또는 네트워킹에도 사용이 가능하다.
	cout << "Your input is" << x << endl; 
	return 0;
	
}