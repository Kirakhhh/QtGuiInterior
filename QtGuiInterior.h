#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiInterior.h"

class QtGuiInterior : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiInterior(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiInteriorClass ui;
};
