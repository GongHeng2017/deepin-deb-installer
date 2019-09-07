/*
 * Copyright (C) 2017 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Author:     sbw <sbw@sbw.so>
 *
 * Maintainer: sbw <sbw@sbw.so>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PACKAGESLISTVIEW_H
#define PACKAGESLISTVIEW_H

#include <DListView>
#include <DWidget>
DWIDGET_USE_NAMESPACE
class PackagesListView : public DListView {
    Q_OBJECT
public:
    explicit PackagesListView(DWidget *parent = nullptr);

protected:
    void leaveEvent(QEvent *e);
};

#endif  // PACKAGESLISTVIEW_H
