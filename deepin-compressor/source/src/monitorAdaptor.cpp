/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp com.archive.mainwindow.monitor.xml -i mainwindow.h -a monitorAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "monitorAdaptor.h"

#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class MonitorAdaptor
 */

MonitorAdaptor::MonitorAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

MonitorAdaptor::~MonitorAdaptor()
{
    // destructor
}

bool MonitorAdaptor::createSubWindow(const QStringList &urls)
{
    // handle method call com.archive.mainwindow.monitor.createSubWindow
    bool out0;
    QMetaObject::invokeMethod(parent(), "createSubWindow", Q_RETURN_ARG(bool, out0), Q_ARG(QStringList, urls));
    return out0;
}

bool MonitorAdaptor::onSubWindowActionFinished(int mode, qlonglong pid, const QStringList &urls)
{
    // handle method call com.archive.mainwindow.monitor.onSubWindowActionFinished
    bool out0;
    QMetaObject::invokeMethod(parent(), "onSubWindowActionFinished", Q_RETURN_ARG(bool, out0), Q_ARG(int, mode), Q_ARG(qlonglong, pid), Q_ARG(QStringList, urls));
    return out0;
}

bool MonitorAdaptor::popUpChangedDialog(qlonglong pid)
{
    // handle method call com.archive.mainwindow.monitor.popUpChangedDialog
    bool out0;
    QMetaObject::invokeMethod(parent(), "popUpChangedDialog", Q_RETURN_ARG(bool, out0), Q_ARG(qlonglong, pid));
    return out0;
}

