#include "Anonymizer.h"
//#include "LogBrowser.h"
#include <QtWidgets/QApplication>




int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	Anonymizer w;	
	w.show();
	QMessageBox *msgBox;
	msgBox = new QMessageBox("FYI :",		///--������������Ϣ�����
		"make sure you have closed files which need to be anonymized and no Chinese characters in the path !", ///--������������Ϣ����ʾ������
		QMessageBox::Warning,							///--����������Ϣ����ʾ��ͼ��
		QMessageBox::Ok | QMessageBox::Default,		///---��������ʾ��Ϣ���ϵİ�ť���
		QMessageBox::Cancel | QMessageBox::Escape,	///---������ �����ϵ� escape ����ϡ����û����¸ü�����Ϣ��ִ��cancel��ť�¼�
		0);														///---������ �����������ť�� ������ ֻ�� ����ʾ2����ť

	msgBox->show();

	if (msgBox->exec() == QMessageBox::Cancel)
	{
		w.close();
	}

	return a.exec();
}
