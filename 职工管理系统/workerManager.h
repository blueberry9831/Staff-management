#pragma once      //��ֹͷ�ļ��ظ�����

#include<iostream>
#include<string>
#include<fstream>
#include"worker.h"
#include"employee.h"
#include"boss.h"
#include"manager.h"

#define FILENAME "empFile.txt"

using namespace std;

class WorkerManager {
public:

	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//����ְ��
	void Add_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Delete_Emp();

	//�ж�ְ���Ƿ���ڣ������ڷ���ְ���±꣬�����ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//��������ĵ�
	void Clean_Emp();

	//�����ļ�
	void save();

	//��ʼ��Ա��
	void init_Emp();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_FileIsEmpty;

	//ͳ������
	int get_EmpNum();

	//��������
	~WorkerManager();

};