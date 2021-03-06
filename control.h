#ifndef CONTROL_H
#define CONTROL_H

#include <QtCore>
#include <QGraphicsPixmapItem>
#include <string>


class Model;
class View;


//! The Control class to control the program logic.
/*!
 The Control class will control the the program logic and manage the
 communication between the model and view objects it will also contain
 some variable about the current state of the program like the curently
 selected folder path.
*/

class Control
{
private:

    //! State variables for file paths.
    std::string folderPath; /**< string to hold the currently selected dataset folder path */
    std::string classifierFilePath; /**< string to hold the currently selected class file path */
    std::string annotationFilePath; /**< string to hold the currently annotation file path */
    std::string selectedImageName;
    std::pair<QString,int> selectedClassifier;
    std::string mode;
    std::string mode2;             //! Used for copy paste
    std::string mode3;             //! Used for resizing of shape
    int sidesToDraw;

    int drawPointsDrawn;
    int drawSidesDrawn;


public:
    //! The Contol constructor.
    Control();

    //! Public pointers to the Model & View objects.
    /*!
     the 3 main objects need to be able to call methods on each other
     therfore they need to hold pointers to eachother so they can do this.
     the pointers are used whenever an object need to call the other
     objects methods.
    */
    Model *model; /**< pointer to the Model object */
    View *view; /**< pointer to the View object */

    //! Access methods to the private variables.
    /**
     @return std::string
     */
    std::string getFolderPath() {return folderPath;}
    std::string getFilePath() {return classifierFilePath;}
    std::string getAnnotationFilePath() {return annotationFilePath;}
    std::string getMode() {return mode;}
    std::string getMode2() {return mode2;}
    std::string getMode3() {return mode3;}
    QString getSelectedClassifier(){return selectedClassifier.first;}
    int getSidesToDraw() {return sidesToDraw;}

    void setSelectedImageName(std::string iN) {selectedImageName = iN;}
    void setSelectedClassifier(QString c);
    void setMode(std::string m) {mode = m;}
    void setMode2(std::string m) {mode2 = m;}
    void setMode3(std::string m) {mode3 = m;}
    void setSidesToDraw(QString shape);



    int requestNumberOfShapes();

    QMap<std::string,QPen> requestPens();

    //! A method taking no arguments and returning a QStringList.
    /*!
     requests a list of the current image names stored in the model
      @return list of the current image names  
    */

    std::vector<QDateTime> requestDates();
    //!takes no arguments and returns a vector of type QDateTime.
    //!requests the file modification dates.


    QStringList requestImageNames();

    //! A method taking no arguments and returning a QStringList.
    /*!
     requests a list of the current classifier names stored in the model
      \return list of the current classifier names
    */
    QStringList requestClassifierNames();

    //! A method taking no arguments and returning a QString.
    /*!
     Using QFileDialog the user is presented with the os's file
     explorer only showing directories and is prompted to select
     the folder containing the dataset they want to label. the
     path of the selected folder is returned.
      \return Folder path as a QString.
    */
    QString requestFolderPath();

    //! A method taking no arguments and returning a QString.
    /*!
     Using QFileDialog the user is presented with the os's file
     explorer only showing *.names files and is prompted to select
     their class file. the path of the selected file is returned.
      \return File path as a QString.
    */
    QString requestFilePath();

    //! A method taking no arguments and returning a QString.
    /*!
     Using QFileDialog the user is presented with the os's file
     explorer only showing *.annotation files and is prompted to select
     their annotation file. the path of the selected file is returned.
      \return File path as a QString.
    */
    QString requestAnnotationPath();

    void requestSave();

    //! A method taking 1 argument and returing a QPixmap.
    /*!

    */
    QGraphicsPixmapItem * requestImage(const QString imageName);

    void requestAssignClassifierToSelectedShapes();

    QStringList requestSortedNameAscending(std::vector<std::string>namesVector);
    //! Sorts either the image or the class names in ascending order.
    //! The int i parameter is used to determine which one is sorted(class or image).

    QStringList requestSortedNameDescending(std::vector<std::string>namesVector);
    //! Same as requestSortedNameAscending, but descending instead.

    QStringList requestSortedDateAscending();
    //! Sorts the image file modified date ascending.

    QStringList requestSortedDateDescending();
    //! Sorts the image file modified date descending.

    QStringList vectorToQStringList(std::vector<std::string> v);
    /**
     * @brief
     *
     * @param list
     * @return std::vector<std::string>
     */
    std::vector<std::string> qStringListToVector(QStringList list);

    QStringList retrieveListDataAscending(int i);
    QStringList retrieveListDataDescending(int i);

    void pointDrawn();

};

#endif // CONTROL_H
