#ifndef QBASE58_H
#define QBASE58_H

#include <QByteArray>

namespace QBase58
{
    QByteArray encode( const QByteArray &in );
    QByteArray decode( const QByteArray &in );

    void test();
}

#endif // QBASE58_H
