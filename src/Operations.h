#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <QObject>

class Graph;
class FuncBase;

class Operations : public QObject
{
    Q_OBJECT

public:
    explicit Operations(QObject *parent = 0);

    void makeGraphFromFile() const;
    void makeGraphFromClipboard() const;
    void makeRandomSample() const;
    void makeRandomSampleParams() const;

signals:
    void graphCreated(Graph* g) const;

private:
    void processFunc(FuncBase* func) const;
};

#endif // OPERATIONS_H
