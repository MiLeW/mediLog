#include "XMLfunctions.hh"

QString XMLfunctions::makeTag(QString tagname, 
			      QString value)
{
  QString str;
  str.append(" <");
  str.append(tagname);
  str.append("> ");

  str.append(value);
  
  str.append(" </");
  str.append(tagname);
  str.append("> ");
  
  return str;
} 
  
		
