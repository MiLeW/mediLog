#include <QtCore/QDate>
#include "Dose.hh"
#include <list>


class Treatment
{
public:
  //  Treatment();
  Treatment(QDate date);
  //  void ~Treatment();
  
  void addDose(const Dose& dose);
  void setDate(const QDate& date);
  
  QString toXMLString();
private:
  std::list<Dose> lDoses;
  QDate mDate;
};
