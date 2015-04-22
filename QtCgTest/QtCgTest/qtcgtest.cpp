#include "qtcgtest.h"

QtCgTest::QtCgTest(QWidget *parent)
	:ui(new Ui::QtCgTest), QWidget(parent)
{
	ui->setupUi(this);
}

QtCgTest::~QtCgTest()
{
	delete ui;
}
