#include"workerManager.h"

int main() {

	/*Worker* worker = NULL;
	worker = new Manager(1, "����", 1);
	worker->ShowInfo();*/

	//ʵ���������߶���
	WorkerManager wm;

	int choice = 0;
	while (true)
	{
		//�˵�
		wm.Show_Menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;//�����û���ѡ��

		switch (choice)
		{
		case 1:    //����ְ��
			wm.Add_Emp();
			break;

		case 2:    //��ʾְ��
			wm.Show_Emp();
			break;

		case 3:    //ɾ��ְ��
			wm.Delete_Emp();
			break;

		case 4:    //�޸�ְ��
			wm.Mod_Emp();
			break;

		case 5:    //����ְ��
			wm.Find_Emp();
			break;

		case 6:    //����ְ��
			wm.Sort_Emp();
			break;

		case 7:    //����ĵ�
			wm.Clean_Emp();
			break;

		case 0:    //�˳�ϵͳ
			wm.ExitSystem();
			break;

		default:
			system("cls");
			break;
		}

	}

	system("pause");
	return 0;
}