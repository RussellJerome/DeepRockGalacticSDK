#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_ThrowCarriable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C
// 0x000C (0x01C4 - 0x01B8)
class UTutorial_ThrowCarriable_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                PickupCount;                                              // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C");
		return ptr;
	}


	void ReceiveOnInitialized();
	void OnCarriableChangedEvent(class AActor** carriedActor);
	void OnThrowCarriableProgress(float* Progress);
	void ExecuteUbergraph_Tutorial_ThrowCarriable(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
