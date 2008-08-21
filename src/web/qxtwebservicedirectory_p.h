/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtWeb  module of the Qxt library.
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of the Common Public License, version 1.0, as published by
** IBM.
**
** This file is provided "AS IS", without WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
** WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR
** FITNESS FOR A PARTICULAR PURPOSE.
**
** You should have received a copy of the CPL along with this file.
** See the LICENSE file and the cpl1.0.txt file included with the source
** distribution for more information. If you did not receive a copy of the
** license, contact the Qxt Foundation.
**
** <http://www.libqxt.org>  <foundation@libqxt.org>
**
****************************************************************************/

#ifndef QXTWEBSERVICEDIRECTORY_P_H
#define QXTWEBSERVICEDIRECTORY_P_H

#include "qxtwebservicedirectory.h"
#include <QString>
#include <QHash>

#ifndef QXT_DOXYGEN_RUN
class QxtWebServiceDirectoryPrivate : public QObject, public QxtPrivate<QxtWebServiceDirectory> {
Q_OBJECT
public:
    QXT_DECLARE_PUBLIC(QxtWebServiceDirectory);
    QxtWebServiceDirectoryPrivate();
    
    QHash<QString, QxtAbstractWebService*> services;
    QString defaultRedirect;

public Q_SLOTS:
    void serviceDestroyed();
};
#endif // QXT_DOXYGEN_RUN

#endif // QXTWEBSERVICEDIRECTORY_P_H
