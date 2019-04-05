#ifndef YACREADER_TOOL_BAR_STRETCH_H
#define YACREADER_TOOL_BAR_STRETCH_H

#include <QHBoxLayout>
#include <QWidget>

class YACReaderToolBarStretch : public QWidget {
public:
    YACReaderToolBarStretch(QWidget* parent = nullptr)
        : QWidget(parent)
    {
        QHBoxLayout* l = new QHBoxLayout();
        l->addStretch();
        setLayout(l);
    }
};

#endif // YACREADER_TOOL_BAR_STRETCH_H
