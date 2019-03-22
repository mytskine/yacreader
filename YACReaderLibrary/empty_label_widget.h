#ifndef EMPTY_LABEL_WIDGET_H
#define EMPTY_LABEL_WIDGET_H

#include "empty_container_info.h"
#include "yacreader_global_gui.h"
#include <QtWidgets>

class EmptyLabelWidget : public EmptyContainerInfo {
    Q_OBJECT
public:
    explicit EmptyLabelWidget(QWidget* parent = 0);
    void setColor(YACReader::LabelColors color);

signals:

public slots:

protected:
};

#endif // EMPTY_LABEL_WIDGET_H
