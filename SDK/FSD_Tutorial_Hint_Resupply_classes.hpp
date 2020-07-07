#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_Resupply_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C
// 0x0022 (0x01DA - 0x01B8)
class UTutorial_Hint_Resupply_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UResourceData*                               ResourceType;                                             // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCappedResource*                             Resource;                                                 // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumAmount;                                            // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeActive;                                        // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasMinedNitraSinceLastTutorial;                           // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTutorialActive;                                         // 0x01D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C");
		return ptr;
	}


	void ReceiveOnInitialized();
	void ReceiveOnHidden();
	void ResourceAdded(class UCappedResource** Resource, float* amount);
	void ExecuteUbergraph_Tutorial_Hint_Resupply(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
