#ifndef TABBROWSINGHISTORY_HPP
#define TABBROWSINGHISTORY_HPP

#include <QAbstractListModel>
#include <QVector>
#include <QUrl>

class TabBrowsingHistory :
        public QAbstractListModel
{
    Q_OBJECT
public:
    TabBrowsingHistory();

    bool canGoBack() const;

    bool canGoForward() const;

    void pushUrl(QUrl const & url);

public:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;


private:
    QVector<QUrl> history;
};

#endif // TABBROWSINGHISTORY_HPP
