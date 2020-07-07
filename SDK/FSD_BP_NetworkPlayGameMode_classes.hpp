#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_NetworkPlayGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C
// 0x000E (0x05D8 - 0x05CA)
class ABP_NetworkPlayGameMode_C : public ABP_GameMode_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x05CA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C");
		return ptr;
	}


	class UClass* GetDefaultPawnClassForController(class AController** InController);
	void RecieveAllDwarvesDown();
	void ExecuteUbergraph_BP_NetworkPlayGameMode(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
