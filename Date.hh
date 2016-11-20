#ifndef DATE_H
#define DATE_H
class Date
{
public:
  enum Month (Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, oct, Nov, Dec);
  void setMonth(Month _month);
  void setDay(int _day);
  void setYear(int _year);
  
  Month getMonth();
  int getDay();
  int getYear();
  
private:
  Month month;
  int Day;
  int year;
}
#endif
