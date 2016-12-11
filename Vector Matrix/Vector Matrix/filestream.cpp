#include <fstream>
#include <iostream>


#define MAX_SIZE 1000
char inputString[MAX_SIZE];

int  main() {
	// ���� �Է� (����)
	std::ofstream ofile("output.txt");

	for (int i = 0; i < 10; i++) {
		ofile << i << std::endl;
	}

	ofile.close();
	//���� ��� (�б�)
	std::ifstream ifile("output.txt");

	while (!ifile.eof()) {
		ifile.getline(inputString, 100);
		std::cout << inputString << std::endl;
	}
	ifile.close();
	return 0;
}

//# ���Ϸ� ����ϴ� ���
//Step1.��� ��Ʈ���� �����ϱ� ���� ��ü�� ����(��밡���� Ŭ���� ofstream, fstream)
//�� #inlcude <fstream.h> ����
//
//Step2.����� ��ü�� Ư�� ������ �����Ͽ� ���� ���� �����Ѵ�.
//
//Step3.����� ��ü�� ��� ���� ������("<<")�� ����Լ��� ���ؼ� ����Ѵ�.
//��� ����� ǥ�� ����°� ���������� ��°���� ����Ͱ� �ƴ� ���Ϸ� ����ȴ�.
//
//Step4.������ ������ �ݴ´�.
//
//
//# ��� ��
//1. ofstream Ŭ������ ��ü�� �����Ѵ�.
//���� ������ ��ü�� �̸��� ����ڰ� �����ϴ� ������ ����� �����ϰ� ��� �̸��� �͵� �������.
//
//ofstream fout;
//
//2. open() �޼ҵ带 ����Ͽ� ����ϱ� ���� ������ �����Ѵ�.
//��� ���� ��ü�� ofstream�� ����� ��쿡�� �б� �������� ���� ���������� ������� �ʾƵ� ��.
//fout.open("test.txt");
//
//3. ��Ʈ�� ��ü�� ����Ͽ� coutó�� ����Ѵ�.������� cout�� ���������� �����  ȭ�鿡 ��Ÿ���� �ʰ� open()�Լ����� ������ "test.txt" ���Ͽ� ��� / ����ȴ�.
//
//fout << "���� ���Ϸ� ��� �˴ϴ�. " << endl;
//fout << "����ͷδ� Ȯ�ε��� �����Ƿ�" << endl;
//fout << "������ �����Ͽ� Ȯ���ϼ���" << endl;
//
//4. ������ ������ �ݴ´�.
//
//fout.close();
//
//
//# Example
//
//// A simple Example of File output
//
//#include <fstream.h> // c++ ���� ����� ���� Ŭ����
//
//void main()
//{
//	ofstream fout; // Ŭ���� ��ü
//	fout.open("C://test.txt"); // ���ϰ�θ� ������ ���� �ִ�
//	fout << "���� ���Ϸ� ��� �˴ϴ�. " << endl;
//	fout << "����ͷδ� Ȯ�ε��� �����Ƿ�" << endl;
//	fout << "������ �����Ͽ� Ȯ���ϼ���" << endl;
//	fout.close();
//}
//
//---------------------------------------------------------------------------- -
//
//[���� �Է�]
//# ���� �Է�
//Step 1. �Է� ��Ʈ���� �����ϱ� ���� ��ü�� �����Ѵ�. (��밡�� Ŭ���� ifstream, fstream)
//�� ���� ���� fstream.h ��������� �����Ѵ�
//
//Step 2. ����� ��ü�� Ư�� ������ �����Ͽ� �б� ���� �����Ѵ�.
//
//Step 3. ����� ��ü�� �Է� ���� ������(">>")�� ��� �Լ��� ���� �Է¹޴´�.
//
//Step 4. ������ ������ �ݴ´�.
//
//
//# ��뿹
//1. ifstream Ŭ������ ��ü�� �����Ѵ�.
//
//ifstream fin;
//
//2. open()�żҵ带 ����Ͽ� �Է��ϱ� ���� ������ �����Ѵ�.
//�Է� ���� ��ü�� ifstream�� ����� ��쿡�� �б� �������� ���� ���������� ������� �ʾƵ� ��.
//
//fout.open("c://info.txt");
//
//3. ��Ʈ�� ��ü�� ����Ͽ� cinó�� �Է� �޴´�.
//
//fin >> str
//
//4. ������ ������ �ݴ´�
//
//fin.close();
//
//
//
//# Example 1
//
//// A simple Example of File Input
//#include <fstream.h> // c++ ���� ����� ���� Ŭ����
//#include <iomanip.h>
//void main()
//{
//	char name[20];
//	int age;
//	char address[20];
//	int i;
//	ofstream fout;
//	fout.open("c://info.txt");
//	cout << "\n================���� ����ϱ�=============\n";
//	for (i = 0; i<3; i++)
//	{
//		cout << i + 1 << "��° ����� �̸��� �Է��ϼ���=>";
//		cin >> name;
//		cout << "���̸� �Է��ϼ���=>";
//		cin >> age;
//		cout << "�ּҸ� �Է��ϼ���=>";
//		cin >> address;
//		fout << name << setw(10) << age << setw(22) << address << endl;
//		cout << name << setw(10) << age << setw(22) << address << endl;
//	}
//}
//
//# Example 2
//Ű����� �Է¹��� ������ "info.txt" ������ ����Ϳ� ����ϴ� ���α׷�
//
//
//// A simple Example of File Input
//#include <fstream.h> // c++ ���� ����� ���� Ŭ����
//#include <iomanip.h>
//void main()
//{
//	char name[20];
//	int age;
//	char address[20];
//
//	ifstream fin; // �Է� Ŭ����
//	fin.open("c://info.txt");
//	cout << "\n================���Ͽ��� �Է¹ޱ�=============\n";
//	cout << "\n��  ��  ��  ��  �ּ�\n";
//	cout << "\n==============================================\n";
//	while (fin >> name >> age >> address)
//	{
//		cout << name << setw(10) << age << setw(22) << address << endl;
//	}
//
//}
//
//
//# ���� �� ���� get()�Լ��� �Է¹޾� ���Ͽ� ����ϱ�
//
//
//# Example 1
//
//// A simple Example of File Input
//#include <fstream.h> // c++ ���� ����� ���� Ŭ����
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
//# ���α׷� ����
//
//1. while (cin.get(ch))
//
//^ Z�� ������ ������ ���ڸ� �� ���� �Է¹޾ƿɴϴ�.
//
//2. fout << ch;
//�Է¹��� ���ڸ� ��� ��ü�� ���Ͽ� ����մϴ�.fout�� "test2.txt"������ �����Ͽ����Ƿ� "test2.txt"�� �������� ������ ��
//
//
//# ���� ���
//���� ������� �پ��� ������� ������ �� �ֽ��ϴ�.
//1. �����ڸ� �̿��Ѵ�.
//2. ����Լ��� �̿��Ѵ�.
//^Z
//
//# test2.txt�� ����
//���� ������� �پ��� ������� ������ �� �ֽ��ϴ�.
//1. �����ڸ� �̿��Ѵ�.
//2. ����Լ��� �̿��Ѵ�.
//
//# Example 2
//����� test2.txt������ ����Ϳ� ����ϴ� ���α׷�
//
//
//// A simple Example of File Input
//#include <fstream.h> // c++ ���� ����� ���� Ŭ����
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
//# ���α׷� ����
//
//while (fin >> name >> age >> address)
//
//�Է� ��ü fin�� ���������� �Է��� �Ͽ����� ifstream &�� �����Ѵ�.EOF�� ������ 0�� �����Ѵ�.������ ���� ���� �� �̻� �Է¹��� �����Ͱ� ������ while ������ �����.���Ͽ� �����Ͱ� �����ϸ� �Է¹��� �����͸�  ���Ͽ� �����Ѵ�.
//
//# "info.txt" ���� ����
//�����      30                ����
//�嵿��      30                ����
//������      40                ���̸�


