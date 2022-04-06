#include "ButtonIcon.h"
#include <QPainter>

CButtonIcon::CButtonIcon(QWidget* parent) : QPushButton(parent)
{

}

CButtonIcon::~CButtonIcon()
{

}

void CButtonIcon::setPixmap(const QPixmap &pixmap)
{
    mPixmap = pixmap;
}

QSize CButtonIcon::sizeHint() const
{
    const auto parentHint = QPushButton::sizeHint();

    // add margins here if needed
    return QSize(parentHint.width() + mPixmap.width(), std::max(parentHint.height(), mPixmap.height()));
}

void CButtonIcon::paintEvent(QPaintEvent *e)
{
    QPushButton::paintEvent(e);

    if(!mPixmap.isNull()) {
        const int y = (height() - mPixmap.height()) / 2; // add margin if needed
        QPainter painter(this);
        painter.drawPixmap(5, y, mPixmap);
    }
}
