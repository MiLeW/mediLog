#include "Treatment.hh"
#include "XMLfunctions.hh"

Treatment::Treatment(QDate date) : mDate(date)
{
}
  

void Treatment::addDose(const Dose& dose)
{
  lDoses.push_back(dose);
}

void Treatment::setDate(const QDate& date)
{
  mDate = date;
}

QString Treatment::toXMLString()
{
  QString doses;
  
  ;
  for (std::list<Dose>::iterator it = lDoses.begin();
       it != lDoses.end(); 
       it++)
    {
      doses.append(it->toXMLString());
    }
  QString value = XMLfunctions::makeTag("Date",mDate.toString());
  value.append(XMLfunctions::makeTag("Doses",doses));
  
  return XMLfunctions::makeTag("Treatment",value);
}


