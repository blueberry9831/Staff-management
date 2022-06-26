#pragma once      //防止头文件重复包含

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

	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//增加职工
	void Add_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Delete_Emp();

	//判断职工是否存在，若存在返回职工下标，不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空所有文档
	void Clean_Emp();

	//保存文件
	void save();

	//初始化员工
	void init_Emp();

	//退出系统
	void ExitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//判断文件是否为空 标志
	bool m_FileIsEmpty;

	//统计人数
	int get_EmpNum();

	//析构函数
	~WorkerManager();

};