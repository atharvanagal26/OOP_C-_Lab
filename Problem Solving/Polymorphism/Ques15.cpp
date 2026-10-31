#include <iostream>
#include <string>
using namespace std;
class DocumentExporter {
protected:
    string fileName;
public:
    DocumentExporter(string name) {
        fileName = name;
    }
    virtual void exportData(const string& content) = 0;
    void displayFileInfo() {
        cout << "[System] Preparing to write target file: " << fileName << "\n";
    }
    virtual ~DocumentExporter() {
        cout << "Closing exporter session for: " << fileName << "\n";
    }
};
class PdfExporter : public DocumentExporter {
public:
    PdfExporter(string name) : DocumentExporter(name) {}
    void exportData(const string& content) override {
        cout << "Formatting content into PDF layout...\n";
        cout << "Successfully exported to '" << fileName << ".pdf' with content: [" << content << "]\n";
    }
};
class CsvExporter : public DocumentExporter {
public:
    CsvExporter(string name) : DocumentExporter(name) {}
    void exportData(const string& content) override {
        cout << "Formatting content into comma-separated values (CSV)...\n";
        cout << "Successfully exported to '" << fileName << ".csv' with content: [" << content << "]\n";
    }
};
int main() {
    DocumentExporter* pdfWriter = new PdfExporter("Annual_Report");
    DocumentExporter* csvWriter = new CsvExporter("Sales_Data");
    pdfWriter->displayFileInfo();
    pdfWriter->exportData("Revenue: $1.2M, Growth: 15%");
    cout << "\n";
    csvWriter->displayFileInfo();
    csvWriter->exportData("ID,Product,Units\n101,Laptop,50\n102,Mouse,200");
    cout << "\n    Cleaning Up Resources    \n";
    delete pdfWriter;
    delete csvWriter;
    return 0;
}