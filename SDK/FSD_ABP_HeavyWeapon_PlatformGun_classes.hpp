#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_HeavyWeapon_PlatformGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_HeavyWeapon_PlatformGun.ABP_HeavyWeapon_PlatformGun_C
// 0x00E8 (0x0378 - 0x0290)
class UABP_HeavyWeapon_PlatformGun_C : public UPlatformGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_33EBDBF04C905644F4BEB2A45E186CE2;      // 0x0298(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0167E87D4FC5D2C35C6432A25017F6CE;// 0x02B8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D8AA4E1C4D10BFF0B7C6D0BCDFCFB4F4;      // 0x0330(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HeavyWeapon_PlatformGun.ABP_HeavyWeapon_PlatformGun_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_HeavyWeapon_PlatformGun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
