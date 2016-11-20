#include <QtCore/QString>

class Dose
{
public:
  Dose(const Dose& dose);
  Dose();
  Dose(const QString& amount,
       const QString& manufacturer,
       const QString& brand,
       const QString& batch);
  const QString toXMLString(); 

private:
  QString mAmount;
  QString mManufacturer;
  QString mBrand;
  QString mBatch;
};
