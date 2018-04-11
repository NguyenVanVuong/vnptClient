// This file is generated by kxml_compiler from occinfo.xml.
// All changes you do to this file will be lost.
#ifndef UPDATEINFO_H
#define UPDATEINFO_H

#include <QString>
#include <QDomElement>
#include <QXmlStreamWriter>

namespace OCC {

class UpdateInfo
{
  public:
    void setVersion( const QString &v );
    QString version() const;
    void setVersionString( const QString &v );
    QString versionString() const;
    void setWeb( const QString &v );
    QString web() const;
    void setDownloadUrl( const QString &v );
    QString downloadUrl() const;
    /**
      Parse XML object from DOM element.
     */
    static UpdateInfo parseElement( const QDomElement &element, bool *ok );
    void writeElement( QXmlStreamWriter &xml );
    static UpdateInfo parseFile( const QString &filename, bool *ok );
    static UpdateInfo parseString( const QString &xml, bool *ok );
    bool writeFile( const QString &filename );

  private:
    QString mVersion;
    QString mVersionString;
    QString mWeb;
    QString mDownloadUrl;
};

} // namespace OCC

#endif // UPDATEINFO_H
