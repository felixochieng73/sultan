#include "xlsxutil.h"

XlsxUtil::XlsxUtil() {}

void XlsxUtil::write(const QVariant &value) { mXlsx.write(mCurrentRow++, 1, value); }

void XlsxUtil::write(const QVariantList &values) {
    for (int i = 0; i < values.size(); i++) {
        mXlsx.write(mCurrentRow, i + 1, values[i]);
    }
    mCurrentRow++;
}

void XlsxUtil::write(int row, int col, const QVariant &value) { mXlsx.write(row, col, value); }

void XlsxUtil::save(const QString &path) { mXlsx.saveAs(path); }

int XlsxUtil::currentRow() const { return mCurrentRow; }

void XlsxUtil::setCurrentRow(int currentRow) { mCurrentRow = currentRow; }
