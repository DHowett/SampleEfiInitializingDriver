#include <Uefi.h>

EFI_STATUS
EFIAPI
SampleEfiInitializingDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
	// Pretend we've done some hardware initialization.
	return EFI_ABORTED;
}
