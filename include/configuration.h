#if !defined(BADGER_CONFIGURATION_H)
#define BADGER_CONFIGURATION_H

namespace Badger
{
    class Configuration
    {
    public:
        Configuration();
        virtual ~Configuration();

        virtual void load() = 0;
        virtual void save() = 0;
    };

} // namespace Badger


#endif // BADGER_CONFIGURATION_H
