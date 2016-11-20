
#include "Dose.hh"
#include <iostream>
#include "XMLfunctions.hh"

Dose::Dose()
{
  std::cout << 
    "Dose constructor Dose::Dose()" << std::endl;
}

Dose::Dose(const Dose& dose) :
  mAmount(dose.mAmount), 
  mManufacturer(dose.mManufacturer),
  mBrand(dose.mBrand),
  mBatch(dose.mBatch)
{
  std::cout << 
    "Dose copy constructor Dose::Dose(const Dose&)" << 
    std::endl;
}

Dose::Dose(const QString& amount,
	   const QString& manufacturer,
	   const QString& brand,
	   const QString& batch):
  mAmount(amount), 
  mManufacturer(manufacturer), 
  mBrand(brand),
  mBatch(batch)
{
}


const QString Dose::toXMLString()
{
  QString str;
  QString amo = "Amount";
  QString man = "Manufacturer";
  QString bra = "Brand";
  QString bat = "Batch";

  str.append(XMLfunctions::makeTag(amo,mAmount));

  str.append(XMLfunctions::makeTag(man,mManufacturer));

  str.append(XMLfunctions::makeTag(bra,mBrand));
    
  str.append(XMLfunctions::makeTag(bat,mBatch));

  return XMLfunctions::makeTag("Dose",str);
}
