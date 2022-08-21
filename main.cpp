#include <iostream>

int main()
{
	const int x{ 10 };
	const int y{ 20 };

	const int* p;

	p = &x;
	p = &y;

	// const int 타입인데 값을 바꿀 수 있나??
	// 위는 상수를 가리키는 포인터이다.
	
	// 바꾸지 못하게 하려면, 
	// int* const p { &x }; 같이 해야한다. (상수 포인터)

	int z{ 30 };
	p = &z;
	// 가능하다. 암시적 형변환이 일어났다.
	
	// const int 타입인 p는 어짜피 역참조가 안된다.
	// 그래서 가리키게 하는건 허용한다.

	// 물론 int을 const int에 연결하는 것은 안된다.
}