#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_GutWrecker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DE_GutWrecker.DE_GutWrecker_C
// 0x0010 (0x0118 - 0x0108)
class UDE_GutWrecker_C : public UDrinkEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerCharacter*                            Character;                                                // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_GutWrecker.DE_GutWrecker_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void OnStartEffect(class APlayerCharacter** Character);
	void OnStopEffect();
	void ExecuteUbergraph_DE_GutWrecker(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
