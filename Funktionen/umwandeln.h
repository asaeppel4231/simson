#ifndef UMWANDELN_H
#define UMWANDELN_H

#include <QString>
#include <math.h>
#include <sstream>
#include <string>

std::string int_to_string(int zahl);
QString int_to_qstring(int zahl);

std::string float_to_string(float zahl);
QString float_to_qstring(float zahl);

std::string double_to_string(double zahl);
QString double_to_qstring(double zahl);
QString double_to_qstring(double zahl, int anz_nachkommastellen);

#endif // UMWANDELN_H
