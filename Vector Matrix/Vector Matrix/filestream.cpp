#include <fstream>
#include <iostream>


#define MAX_SIZE 1000
char inputString[MAX_SIZE];

int  main() {
	// 파일 입력 (쓰기)
	std::ofstream ofile("output.txt");

	for (int i = 0; i < 10; i++) {
		ofile << i << std::endl;
	}

	ofile.close();
	//파일 출력 (읽기)
	std::ifstream ifile("output.txt");

	while (!ifile.eof()) {
		ifile.getline(inputString, 100);
		std::cout << inputString << std::endl;
	}
	ifile.close();
	return 0;
}

//# 파일로 출력하는 방법
//Step1.출력 스트림을 관리하기 위한 객체를 선언(사용가능한 클래스 ofstream, fstream)
//※ #inlcude <fstream.h> 선언
//
//Step2.선언된 객체에 특정 파일을 지정하여 쓰기 모드로 오픈한다.
//
//Step3.선언된 객체에 출력 전용 연산자("<<")나 멤버함수를 통해서 출력한다.
//출력 방식은 표준 입출력과 유사하지만 출력결과가 모니터가 아닌 파일로 저장된다.
//
//Step4.오픈한 파일을 닫는다.
//
//
//# 사용 예
//1. ofstream 클래스로 객체를 선언한다.
//새로 생성될 객체의 이름은 사용자가 정의하는 것으로 지정어를 제외하고 어떠한 이름이 와도 상관없다.
//
//ofstream fout;
//
//2. open() 메소드를 사용하여 출력하기 위한 파일을 지정한다.
//출력 전용 객체인 ofstream을 사용할 경우에는 읽기 전용인지 쓰기 전용인지를 명시하지 않아도 됨.
//fout.open("test.txt");
//
//3. 스트림 객체를 사용하여 cout처럼 출력한다.사용방법은 cout과 유사하지만 결과가  화면에 나타나지 않고 open()함수에서 지정한 "test.txt" 파일에 출력 / 저장된다.
//
//fout << "나는 파일로 출력 됩니다. " << endl;
//fout << "모니터로는 확인되지 않으므로" << endl;
//fout << "파일을 오픈하여 확인하세요" << endl;
//
//4. 오픈한 파일을 닫는다.
//
//fout.close();
//
//
//# Example
//
//// A simple Example of File output
//
//#include <fstream.h> // c++ 파일 입출력 제공 클래스
//
//void main()
//{
//	ofstream fout; // 클래스 객체
//	fout.open("C://test.txt"); // 파일경로를 지정할 수도 있다
//	fout << "나는 파일로 출력 됩니다. " << endl;
//	fout << "모니터로는 확인되지 않으므로" << endl;
//	fout << "파일을 오픈하여 확인하세요" << endl;
//	fout.close();
//}
//
//---------------------------------------------------------------------------- -
//
//[파일 입력]
//# 파일 입력
//Step 1. 입력 스트림을 관리하기 위한 객체를 선언한다. (사용가능 클래스 ifstream, fstream)
//※ 주의 사항 fstream.h 헤더파일을 포함한다
//
//Step 2. 선언된 객체에 특정 파일을 지정하여 읽기 모드로 오픈한다.
//
//Step 3. 선언된 객체에 입력 전용 연산자(">>")나 멤버 함수를 통해 입력받는다.
//
//Step 4. 오픈한 파일을 닫는다.
//
//
//# 사용예
//1. ifstream 클래스로 객체를 선언한다.
//
//ifstream fin;
//
//2. open()매소드를 사용하여 입력하기 위한 파일을 지정한다.
//입력 전용 객체인 ifstream을 사용할 경우에는 읽기 전용인지 쓰기 전용인지를 명시하지 않아도 됨.
//
//fout.open("c://info.txt");
//
//3. 스트림 객체를 사용하여 cin처럼 입력 받는다.
//
//fin >> str
//
//4. 오픈한 파일을 닫는다
//
//fin.close();
//
//
//
//# Example 1
//
//// A simple Example of File Input
//#include <fstream.h> // c++ 파일 입출력 제공 클래스
//#include <iomanip.h>
//void main()
//{
//	char name[20];
//	int age;
//	char address[20];
//	int i;
//	ofstream fout;
//	fout.open("c://info.txt");
//	cout << "\n================파일 출력하기=============\n";
//	for (i = 0; i<3; i++)
//	{
//		cout << i + 1 << "번째 사람의 이름을 입력하세요=>";
//		cin >> name;
//		cout << "나이를 입력하세요=>";
//		cin >> age;
//		cout << "주소를 입력하세요=>";
//		cin >> address;
//		fout << name << setw(10) << age << setw(22) << address << endl;
//		cout << name << setw(10) << age << setw(22) << address << endl;
//	}
//}
//
//# Example 2
//키보드로 입력받은 데이터 "info.txt" 파일을 모니터에 출력하는 프로그램
//
//
//// A simple Example of File Input
//#include <fstream.h> // c++ 파일 입출력 제공 클래스
//#include <iomanip.h>
//void main()
//{
//	char name[20];
//	int age;
//	char address[20];
//
//	ifstream fin; // 입력 클래스
//	fin.open("c://info.txt");
//	cout << "\n================파일에서 입력받기=============\n";
//	cout << "\n이  름  나  이  주소\n";
//	cout << "\n==============================================\n";
//	while (fin >> name >> age >> address)
//	{
//		cout << name << setw(10) << age << setw(22) << address << endl;
//	}
//
//}
//
//
//# 문자 한 개를 get()함수로 입력받아 파일에 출력하기
//
//
//# Example 1
//
//// A simple Example of File Input
//#include <fstream.h> // c++ 파일 입출력 제공 클래스
//#include <iomanip.h>
//void main()
//{
//	char ch;
//	ofstream fout;
//	fout.open("c://test2.txt");
//	while (cin.get(ch))
//	{
//		fout << ch;
//	}
//	fout.close();
//}
//
//# 프로그램 설명
//
//1. while (cin.get(ch))
//
//^ Z가 눌리기 전까지 문자를 한 개씩 입력받아옵니다.
//
//2. fout << ch;
//입력받은 문자를 출력 객체를 통하여 출력합니다.fout이 "test2.txt"파일을 오픈하였으므로 "test2.txt"에 차곡차곡 저장이 됨
//
//
//# 실행 결과
//파일 입출력을 다양한 방법으로 실행할 수 있습니다.
//1. 연산자를 이용한다.
//2. 멤버함수를 이용한다.
//^Z
//
//# test2.txt의 내용
//파일 입출력을 다양한 방법으로 실행할 수 있습니다.
//1. 연산자를 이용한다.
//2. 멤버함수를 이용한다.
//
//# Example 2
//저장된 test2.txt파일을 모니터에 출력하는 프로그램
//
//
//// A simple Example of File Input
//#include <fstream.h> // c++ 파일 입출력 제공 클래스
//#include <iomanip.h>
//void main()
//{
//	char ch;
//	ifstream fin;
//	fin.open("c://test2.txt");
//	while (fin.get(ch))
//	{
//		cout << ch;
//	}
//	fin.close();
//}
//
//# 프로그램 설명
//
//while (fin >> name >> age >> address)
//
//입력 객체 fin은 성공적으로 입력을 하였으면 ifstream &을 리턴한다.EOF를 만나면 0을 리턴한다.파일의 끝을 만나 더 이상 입력받을 데이터가 없으면 while 밖으로 벗어난다.파일에 데이터가 존재하면 입력받은 데이터를  파일에 저장한다.
//
//# "info.txt" 파일 내용
//김수로      30                서울
//장동건      30                서울
//응삼이      40                양촌리


