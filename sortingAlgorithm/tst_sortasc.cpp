#include <QtTest>

// add necessary includes here

class sortAscDes : public QObject
{
    Q_OBJECT

public:
    sortAscDes();
    ~sortAscDes();

private slots:
   // void test_case1();
   // void test_case2();
    void test_case3();

};

sortAscDes::sortAscDes()
{

}

sortAscDes::~sortAscDes()
{

}

/*void sortAscDes::test_case1() //Sorting for ascending classifier names
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


    QStringList list1 = {"cat","dog","mouse"};
    //QStringList list2 = {"bat","dog","mouse"};
    QVERIFY(true);
    QCOMPARE(returnList,list1);
}
void sortAscDes::test_case2()//Sorting for descending classifier names
{
    bool swapped = false;
    std::vector<std::string> names = {"dog","mouse","cat"};
        for (unsigned int i = 0; i < names.size() - 1; ++i) {
            for (unsigned int j = 0; j < names.size() - 1 - i; ++j) {

                if (names[j] < names[j + 1]) {
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

    QStringList list2 = {"mouse","dog","cat"};
    QStringList list3= {"cat","mouse","dog"};
    QVERIFY(true);
    //QCOMPARE(returnList,list2);
    QCOMPARE(returnList,list3);
}*/
void sortAscDes::test_case3() //Sorting for ascending classifier names
{
    bool swapped = false;
    std::vector<std::string> names = {"lava_abstract","ark-survival-evolved","snakegame","dragon_eye","toothless_night_fury_dragon_5k"};
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


    QStringList list5 = {"ark-survival-evolved","dragon_eye","lava_abstract","snakegame","toothless_night_fury_dragon_5k"};
    //QStringList list6 = {"dragon_eye","toothless_night_fury_dragon_5k","lava_abstract","ark-survival-evolved","snakegame"};
    QVERIFY(true);
    QCOMPARE(returnList,list5);
}

QTEST_APPLESS_MAIN(sortAscDes)

#include "tst_sortasc.moc"
