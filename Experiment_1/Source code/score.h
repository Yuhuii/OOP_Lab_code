#ifndef __SCORE_H__
#define __SCORE_H__

#include<iostream>
#include <string>
using namespace std;

//ѧ���ṹ��
struct SS
{
	long number;  //ѧ��
	char name[20];    //����
	float dailyScore;   //ƽʱ�ɼ�
	float finalScore;   //��ĩ�ɼ�
	float generalScore; //�����ɼ�
	float text;//ʵ��ɼ�
	int rank;//����
};

//��Ա����

//��ȡѧ����Ϣ
//void readData(SS stu[], int N);//s�����ȡ
SS* readDataFromFile(int N);//�ļ���ȡ
//����ѧ���������ɼ�
void calcuScore(SS stu[], int N);
//����
void sortScore(SS stu[], int N);
//���ѧ����������Ϣ
void printOut(SS stu[], int N);
//д��Excel�ĵ�
void putintoExcel(SS stu[],int N);
//����ѧ�ż��ɲ�ѯ����
void inSpect(SS stu[],int N);
//�󷽲ƽ��ֵ
void calculate(SS stu[],int N);

#endif
