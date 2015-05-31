# Lab3
#include <iostream>
#include <list>

using namespace std;
/** \class Ñïèñîê äëÿ ÷èñåë è ìåòîäû ðàáîòû ñ íèì
 */

class List {
     list<int> catalog; /**< ñïèñîê */
     int countOfFiles; /**< êîëè÷åñòâî ôàéëîâ */
 public:
     /** \brief Êîíñòðóòîð áåç ïàðàìåòðîâ
      *
      */

     List();
     /** \brief Ìåòîä äîáàâëåíèÿ çíà÷åíèÿ â ñïèñîê
      *
      * \param [in] value - çíà÷åíèå äîáàâëÿåìîå â ñïèñîê
      *
      */

     void add(int);
     /** \brief Ìåòîä óäàëÿþùèé ýëìåíò ïî íîìåðó
      *
      * \param [in] number - íîìåð ýëåìåíòà
      *
      */

     void del(int);
     /** \brief Ìåòîä ðàñïå÷àòûâàåò ñïèñîê
      *
      */

     void printAll();
     /** \brief Äåñòðóêòîð êëàññà
      */

     ~List();
};

List::List(){
    countOfFiles = 0;
}
void List::add(int value){
    catalog.push_back(value);
    ++countOfFiles;
}
void List::del(int pos){
    int i = 0;
    for(list<int>::iterator it = catalog.begin(); it != catalog.end(); ++it){
        if(i == pos){
            catalog.erase(it);
        }
        ++i;
    }
}
void List::printAll(){
    for(list<int>::iterator it = catalog.begin(); it != catalog.end(); ++it){
        cout << *it <<endl;
    }
}
List::~List(){}



int main()
{
    List * catalog = new List();
    int count = 0;
    cin >> count;
    for(int i = 0; i < count; i ++){
        int number = 0;
        cin >> number;
        catalog->add(number);
    }
    catalog->printAll();
    delete catalog;
    return 0;
}
