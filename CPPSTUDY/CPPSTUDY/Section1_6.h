#pragma once

// 키워드와 식별자 이름 짓기

/*  메인 함수는 reserved keyword와 같이 사용된다. 그렇기에... main은...
void main() {

}
*/

// 함수의 이름은 대문자를 많이 사용한다.
// 도로가나 모로가나 보는 사람이 이해만 할 수 있다면 된다.
void GetNumber() { // 동사-명사인 경우가 일반적이며 읽기 좋다.

}

int Section1_6() {
	// 식별자는 실력보다는 센스에 가깝다.
	// 오히려 전공이 아니어도 잘될 수 있음.

	// 많은 키워드들이 예약어 (reserved keyword)로써 사용되고 있다. 
	// 이를 미리 몇몇 알고, 이를 변수명으로써 사용하면 안된다.

	//int 1sec; 이름은 숫자로 시작되면 안된다.
	int value; // 이름은 길지 않으면서 그 의미를 충분히 가지는 변수들이 좋다.

	int n_apples;// 결론적으로 다음에 이 코드를 보았을때 이해되면 아무토록 상관없다.
	int n_oranges;

	int VALUES; // 대문자는 대부분 매크로에 쓰이기 때문에 안씀.
				// 하지만 최근에는 그게 좀 줄어들고 있어서 정해진 바가 없으면 원할대로 하자.

	int PenPineAppleApplePen; // 다음과 같이 코드가 길수밖게 없으면 이를 주석으로 설명해주면 된다.
	return 0;
}

class MyClass {
public:
	int m_variable; // 클래스 내에도 뭔가 있음.
};