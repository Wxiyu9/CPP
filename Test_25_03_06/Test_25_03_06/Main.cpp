//#include <stdio.h>
//#include <stdlib.h>
//#include "test.h"
//
//
//namespace wx_test1 {
//
//	// �����ռ��п��Զ������/����/���͵�
//	int rand = 10;
//
//	int Add(int a, int b) {
//		return a + b;
//	}
//
//	struct Node {
//		int val;
//		struct Node* next;
//	};
//}
//
//namespace wx_test2 {
//	// �����ռ����Ƕ��
//	namespace wx_test3 {
//		int rand = 3;
//
//		int Add(int a, int b) {
//			return a + b;
//		}
//	}
//
//	namespace wx_test4 {
//		int rand = 4;
//
//		int Add(int a, int b) {
//			return a + b;
//		}
//	}
//}
//
//int main() {
//	printf("%d\n", wx_test2::wx_test3::rand); // 3
//	printf("%d\n", wx_test2::wx_test4::rand); // 4
//
//	printf("%d\n", wx_test2::wx_test3::Add(1, 2)); // 3
//	printf("%d\n", wx_test2::wx_test4::Add(1, 2)); // 3
//
//	return 0;
//}

#include <iostream>

using namespace std;

int main() {
	int a = 2;
	char b = 'x';
	double c = 0.3;
	
	// ���
	cout << a << " " << b << " " << c << endl;
	
	// ����
	cin >> a;
	cin >> b >> c;

	// ���
	std::cout << a << " " << b << " " << c << std::endl;
	return 0;
}
