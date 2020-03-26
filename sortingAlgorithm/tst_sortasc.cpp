#include <QtTest>

// add necessary includes here

class sortAsc : public QObject
{
    Q_OBJECT

public:
    sortAsc();
    ~sortAsc();

private slots:
    void test_case1();

};

sortAsc::sortAsc()
{

}

sortAsc::~sortAsc()
{

}

void sortAsc::test_case1()
{
    bool swapped = false;
    std::vector<std::string> names = {"dog","mouse","cat"};
        for (unsigned int i = 0; i < names.size() - 1; ++i) {
            for (unsigned int j = 0; j < names.size() - 1 - i; ++j) {

                if (names[j] > names[j + 1]) {
                    std::string temp = names[j];
                    names[j] = names[j + 1];
                    names[j + 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
            swapped = false;
        }
        QStringList returnList;
            for(unsigned i=0; i < names.size(); i++) {
                QString item = QString::fromStdString(names[i]);
                returnList.append(item);
            }


    //QStringList list1 = {"cat","dog","mouse"};
    QStringList list2 = {"bat","dog","mouse"};
    QVERIFY(true);
    QCOMPARE(returnList,list2);
}

QTEST_APPLESS_MAIN(sortAsc)

#include "tst_sortasc.moc"
