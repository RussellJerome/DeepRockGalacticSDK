#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Shotgun_A_ShellTP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C
// 0x000C (0x0378 - 0x036C)
class ABP_Shotgun_A_ShellTP_C : public AMAG_BaseClass_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C");
		return ptr;
	}


	bool Attached(class AActor** Parent);
	void OnItemSkinned(class USkinEffect** Skin);
	void ExecuteUbergraph_BP_Shotgun_A_ShellTP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
