/*
SmartLaunch: multi-function app launcher.
Copyright (C) 2017 Samson Wang

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SMARTLAUNCH_SMARTLAUNCH_SMARTLAUNCH_H
#define SMARTLAUNCH_SMARTLAUNCH_SMARTLAUNCH_H

#include <QtWidgets/QDialog>
#include "ui_SmartLaunch.h"

class SmartLaunch : public QDialog
{
  Q_OBJECT
public:
	SmartLaunch(QWidget* pParent = Q_NULLPTR);

private:
  Ui::SmartLaunchClass ui;
};

#endif // SMARTLAUNCH_SMARTLAUNCH_SMARTLAUNCH_H
