#include "Anonymizer.h"
#include <QtWidgets/QApplication>




int main(int argc, char *argv[])
{
	qRegisterMetaType<QFileInfoList>("QFileInfoList");
	QApplication a(argc, argv);
	
	Anonymizer AnonymizerMainWindow;	
	AnonymizerMainWindow.setWindowFlags(AnonymizerMainWindow.windowFlags()&~Qt::WindowMaximizeButtonHint);    // ��ֹ��󻯰�ť
	AnonymizerMainWindow.setFixedSize(AnonymizerMainWindow.width(), AnonymizerMainWindow.height());                     // ��ֹ�϶����ڴ�С
	AnonymizerMainWindow.show();

	

	QMessageBox *msgBox;
	msgBox = new QMessageBox("Warning :",		///--������������Ϣ�����
		"make sure you have closed files which need to be anonymized and no Chinese characters in the path !", ///--������������Ϣ����ʾ������
		QMessageBox::Warning,							///--����������Ϣ����ʾ��ͼ��
		QMessageBox::Yes | QMessageBox::Default,		///---��������ʾ��Ϣ���ϵİ�ť���
		QMessageBox::No | QMessageBox::Escape,	///---������ �����ϵ� escape ����ϡ����û����¸ü�����Ϣ��ִ��cancel��ť�¼�
		0);														///---������ �����������ť�� ������ ֻ�� ����ʾ2����ť

	msgBox->show();

	if (msgBox->exec() == QMessageBox::No)
	{
		return 0;
		//AnonymizerMainWindow.close();

	}


	return a.exec();
}
