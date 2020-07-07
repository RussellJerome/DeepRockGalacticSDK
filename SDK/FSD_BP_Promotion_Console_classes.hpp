#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Promotion_Console_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Promotion_Console.BP_Promotion_Console_C
// 0x0010 (0x0410 - 0x0400)
class ABP_Promotion_Console_C : public ABP_BaseSpaceRigConsole_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Promotion_Console.BP_Promotion_Console_C");
		return ptr;
	}


	void OnOpenConsole(class ABP_PlayerController_SpaceRig_C** InPlayerController);
	void ExecuteUbergraph_BP_Promotion_Console(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
