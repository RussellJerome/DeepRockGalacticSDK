#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_Nitra_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C
// 0x0018 (0x01D0 - 0x01B8)
class UTutorial_Hint_Nitra_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCappedResource*                             Resource;                                                 // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumAmount;                                            // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeActive;                                        // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C");
		return ptr;
	}


	void OnIncreased_Event(class UCappedResource** Resource, float* amount);
	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_Nitra(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
