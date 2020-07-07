#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_EquipGrenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C
// 0x0014 (0x01CC - 0x01B8)
class UTutorial_Hint_EquipGrenade_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               HasEquipped;                                              // 0x01C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	float                                              FirstTimeDelay;                                           // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterUseDelay;                                            // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C");
		return ptr;
	}


	void GrenadeThrown();
	void ReceiveOnInitialized();
	void ReceiveOnHidden();
	void ExecuteUbergraph_Tutorial_Hint_EquipGrenade(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
