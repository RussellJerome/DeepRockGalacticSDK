#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_Flares_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_Flares.Tutorial_Hint_Flares_C
// 0x0010 (0x01C8 - 0x01B8)
class UTutorial_Hint_Flares_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FirstTimeDelay;                                           // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterUseDelay;                                            // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_Flares.Tutorial_Hint_Flares_C");
		return ptr;
	}


	void OnFlareThrown();
	void ReceiveOnHidden();
	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_Flares(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
