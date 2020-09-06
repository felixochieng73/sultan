#ifndef XLSUTIL_H
#define XLSUTIL_H

#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxchartsheet.h"
#include "xlsxdocument.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"

using namespace QXlsx;

class XlsxUtil {
  public:
    XlsxUtil();
    void write(const QVariant &value);
    void write(const QVariantList &values);
    void write(int row, int col, const QVariant &value);
    void save(const QString &path);

    int currentRow() const;
    void setCurrentRow(int currentRow);

  private:
    Document mXlsx;
    int mCurrentRow = 1;
};

#endif // XLSUTIL_H
