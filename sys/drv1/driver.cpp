#include "driver.h"

_Function_class_(DRIVER_UNLOAD) _IRQL_requires_(PASSIVE_LEVEL)
_IRQL_requires_same_ static void
DriverUnload(_In_ PDRIVER_OBJECT DriverObject)
{
    dprintf("[Driver] DriverUnload\n");
}

#ifdef __llvmmsvc__
__declspec(naked) UINT64 HowAreYou()
{
    _asm
    {
        mov rax, 1
        ret
    }
}
#else
UINT64
HowAreYou()
{
    return 0;
}
#endif

_Function_class_(DRIVER_INITIALIZE) _IRQL_requires_same_ _IRQL_requires_(PASSIVE_LEVEL)
extern "C" NTSTATUS
DriverEntry(_In_ PDRIVER_OBJECT DriverObject, _In_ PUNICODE_STRING RegistryPath)
{
    // Set callback functions
    DriverObject->DriverUnload = DriverUnload;

    __try
    {
        dprintf("[Driver] DriverEntry %p\n", HowAreYou());
        __debugbreak();
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        dprintf("[Driver] DriverEntry: Exception\n");
    }

    return STATUS_SUCCESS;
}
