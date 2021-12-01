#if !defined(BADGER_IODEVICE_H)
#define BADGER_IODEVICE_H

namespace Badger
{
    class IODevice
    {
    public:
        IODevice() {};
        virtual ~IODevice() {};

        virtual int open() = 0;
        virtual int close() = 0;
        virtual int read(unsigned int block, void* buffer, size_t len) = 0;
        virtual int write(unsigned int block, void* buffer, size_t len) = 0;
        virtual unsigned int ioctl(unsigned int request, unsigned int param) = 0;
    };

} // namespace Badger


#endif // BADGER_IODEVICE_H
