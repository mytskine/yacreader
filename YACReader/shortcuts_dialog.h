#ifndef SHORTCUTS_DIALOG_H
#define SHORTCUTS_DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QTextEdit>

class ShortcutsDialog : public QDialog {
    Q_OBJECT
public:
    ShortcutsDialog(QWidget* parent = 0);

private:
    QTextEdit* shortcuts;
    QPushButton* close;
public slots:
};

#endif // SHORTCUTS_DIALOG_H
