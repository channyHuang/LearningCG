#ifndef QTCGTEST_H
#define QTCGTEST_H

#include <QtWidgets/QWidget>
#include "ui_qtcgtest.h"

namespace Ui
{
	class QtCgTest;
}

class QtCgTest : public QWidget
{
	Q_OBJECT

public:
	QtCgTest(QWidget *parent = 0);
	~QtCgTest();

private:
	Ui::QtCgTest *ui;
};

#endif // QTCGTEST_H
