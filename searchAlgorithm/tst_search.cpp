#include <QtTest>
#include <iostream>

// add necessary includes here

class search : public QObject
{
    Q_OBJECT


private slots:
    void test_case1();
    //void test_case2();

};

void search::test_case1()
{

    int index = 0;
    std::vector<std::string> classifierNames = {"dog","mouse","cat"};
    std::string classifierName="cat";
    for(unsigned i=0; i<classifierNames.size(); i++)
     {
         if(classifierName == classifierNames[i]){
             index = i;
             break;
         }
     }
     //int test = 1;
    int test =2;
     QVERIFY(true);
     QCOMPARE(test,index);
 }




/*void search::test_case2() // binary search algorithm
{
    std::vector<std::string> namesVector = { "ark-survival-evolved","dragon_eye","lava_abstract","snakegame","toothless_night_fury_dragon_5k"};
        std::string names = "dragon_eye";
        int len = namesVector.size();
        int l = 0;
        int r = len - 1;
        int m;
        while (l <= r)
        {
            m = l + (r - l) / 2;

            int res;
            if (names == (namesVector[m])) {
                res = 0;
                break;
            }

            // If x greater, ignore left half
            if (names > (namesVector[m])){
                l = m + 1;}

            // If x is smaller, ignore right half
            else{
                r = m - 1;}
        }

    int testIndex = 1;
    QVERIFY(true);
    QCOMPARE(m,testIndex);
}
*/
QTEST_APPLESS_MAIN(search)

#include "tst_search.moc"
