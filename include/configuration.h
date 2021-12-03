#if !defined(BADGER_CONFIGURATION_H)
#define BADGER_CONFIGURATION_H
#include <string>

namespace Badger
{
    class Configuration
    {
    public:
        Configuration();
        virtual ~Configuration();

        virtual bool load() = 0;
        virtual bool save() = 0;
    protected:
        std::string m_local_name;
    };

} // namespace Badger


#endif // BADGER_CONFIGURATION_H
