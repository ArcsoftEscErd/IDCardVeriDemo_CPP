#include "idcardreader.h"


IDCardReader::IDCardReader(QObject *parent)
	: QObject(parent)
{

}

IDCardReader::IDCardReader()
{
	connect(this, SIGNAL(signalReadFinished()), this, SLOT(readCardInfo()));//�󶨶�ȡ��Ϣ
	qRegisterMetaType<CardInfo>("CardInfo");

}

IDCardReader::~IDCardReader()
{

}


bool IDCardReader::initReader()
{
	//TODO
	//��ʼ��

	return false;
}


bool IDCardReader::readCardInfo()
{
	//TODO 
	//��ȡ���֤��Ϣ

	return false;
}

void IDCardReader::readCard()
{
	//TODO
	//���������Զ�����ʧ�ܳ�����֤����֤�ɹ��ٶ�һ��

}
