// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_CoreUObject_classes.hpp"
#include "FSD_Engine_classes.hpp"

namespace SDK
{
TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;
UWorld** UWorld::GWorld = nullptr;
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
