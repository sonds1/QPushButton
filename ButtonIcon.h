#ifndef CBUTTONICON_H
#define CBUTTONICON_H

#include <QPushButton>
#include <QPixmap>

class CButtonIcon : public QPushButton
{
public:
    explicit CButtonIcon(QWidget* parent = nullptr);
    virtual ~CButtonIcon();

    void setPixmap(const QPixmap& pixmap);
    virtual QSize sizeHint() const override;

private:
    QPixmap mPixmap;

protected:
    virtual void paintEvent(QPaintEvent* e) override;
};

#endif // CBUTTONICON_H
