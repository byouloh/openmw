#ifndef EDITORPAGE_HPP
#define EDITORPAGE_HPP

#include "support.hpp"
#include "abstractpage.hpp"

namespace CSVSettings
{
    class DataDisplayFormatPage : public AbstractPage
    {
        Q_OBJECT

    public:
        explicit DataDisplayFormatPage(QWidget *parent = 0);

        void initializeWidgets (const CSMSettings::SettingMap &settings);
        void setupUi();

    private:

        /// User preference view of the record status delegate's icon / text setting
        GroupBlockDef *setupDataDisplay(const QString &);

    signals:

        /// Signals up for changes to editor application-level settings
        void signalUpdateEditorSetting (const QString &settingName, const QString &settingValue);

    public slots:
    };
}

#endif // EDITORPAGE_HPP
