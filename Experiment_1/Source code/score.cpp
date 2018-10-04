#include<iostream>
#include<math.h>
#include <string>
#include<stdlib.h>
#include<stdio.h>
#include <cstdlib>
#include <fstream>
#include"score.h"
using namespace std;


//��ȡѧ����Ϣ
SS* readDataFromFile(int N)//�ļ���ȡ����
{
	cout << endl << "-----��һ��: ���ļ�(��ĿĿ¼�£���ȡѧ���ĳɼ���Ϣ--------" << endl;
	ifstream fin;
	fin.open("E:\score.txt");//��ȡ����Ŀ��txt�������
	if (fin.fail())
	{
		cout << "Input file opening failed!";
		exit(1);
	}
	cout << "ѧ����ĿΪ:" << N << endl;
	SS stu[100];
	for (int i = 0; i < N; i++)
	{
		fin >> stu[i].number;
		fin >> stu[i].name;
		fin >> stu[i].dailyScore;
		fin >> stu[i].text;
		fin >> stu[i].finalScore;
		cout << "ѧ��;" << stu[i].number << " " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "ʵ��ɼ�:" << stu[i].text << " " << "��ĩ�ɼ�:" << stu[i].finalScore << endl;
	}
	fin.close();
	return stu;
}

//����ѧ���������ɼ�
void calcuScore(SS stu[], int N)
{
	cout << endl << "-----�ڶ���: ����ѧ�����ܳɼ�--------" << endl;
	for (int i = 0; i < N; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore +0.2*stu[i].text+0.6*stu[i].finalScore;
		cout << "ѧ��;" << stu[i].number << " " << "����:" << stu[i].name << " " << "�ܳɼ�:" << stu[i].generalScore << endl;
	}
}

//����(ð���㷨��
void sortScore(SS stu[], int N)
{
	int i, j;
	SS swap;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < (N - i); j++)
		{
			if (stu[j].generalScore < stu[j + 1].generalScore)
			{
				swap = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = swap;
			}
		}
		stu[i].rank = i+1;
	}
}

//���ѧ����������Ϣ
void printOut(SS stu[], int N)
{
	cout << endl << "------������: �����ܳɼ��ɴ�С���ѧ��������Ϣ!------" << endl;

	for (int i = 0; i < N; i++)
	{

		cout << "ѧ��;" << stu[i].number << " " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "ʵ��ɼ�:" << stu[i].text << " " << "��ĩ�ɼ�:" << stu[i].finalScore << " " << "�ܳɼ�:" << stu[i].generalScore << " " << "����" << stu[i].rank << endl;
	}

}

//д��Excel�ĵ�
void putintoExcel(SS stu[],int N)
{
	cout << endl << "-------���Ĳ�����ѧ��������Ϣд����ĿĿ¼�µ�Ecxel�ĵ�------" << endl;
	ofstream fout;
	fout.open("E:\score.xls");
	fout << "ѧ��\t����\tƽʱ����\tʵ�����\t��ĩ����\t�ܷ�\t����\t\n";
	for (int i = 0; i < N; i++)
	{
		fout<<stu[i].number<<"\t";
		fout << stu[i].name << "\t";
		fout << stu[i].dailyScore << "\t";
		fout << stu[i].finalScore << "\t";
		fout << stu[i].text<<"\t";
		fout << stu[i].generalScore << "\t";
		fout << stu[i].rank<<"\t" ;
		fout << "\n";
	}
	fout.close();

}

//����ѧ�ż��ɲ�ѯ����
void inSpect(SS stu[],int N)
{
	long a;
	int b=0;
	char f=0;
	cout << endl << "���������������������������岽����ѯ���ܡ�������������������" << endl;
	cout << "������Ҫ��ѯѧ�ţ�" << endl;


		cin >> a;

	for (int i = 0; i <N; i++)
	{
		if (a==stu[i].number)
		{
			cout << "����ѧ��;" << stu[i].number << "���� " << "����:" << stu[i].name << " " << "ƽʱ�ɼ���" << stu[i].dailyScore << " " << "ʵ��ɼ�:" << stu[i].text << " " << "��ĩ�ɼ�:" << stu[i].finalScore << " " << "�ܳɼ�:" << stu[i].generalScore << " " << "����" << stu[i].rank << endl;
			b = 1;

		}

	}

	if (b == 0)cout << "��ѯʧ��" << endl;
}
//�󷽲ƽ��ֵ
void calculate(SS stu[],int N)
{
	int i = 0;
	cout << endl << "�������������������������������������ֵ��������������������" << endl;
	float SUM=0;
	for (; i < N; i++)
	{
		SUM = SUM+stu[i].generalScore;
	}
	SUM = (float)(SUM / i);
	cout << "ƽ���ܳɼ�Ϊ��";
	cout<<SUM << endl;
	cout << endl << "���������������������������߲������㷽�������������������" << endl;
	float b=0, c;
	i = 0;
	for (; i < N; i++)
	{
		b = (float)(b + (stu[i].generalScore - SUM )*(stu[i].generalScore - SUM ));
	}
	c = (float)(b / i);
	cout << "����Ϊ��" << c << endl;


}
