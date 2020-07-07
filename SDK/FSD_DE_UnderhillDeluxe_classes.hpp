#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_UnderhillDeluxe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DE_UnderhillDeluxe.DE_UnderhillDeluxe_C
// 0x003D (0x0145 - 0x0108)
class UDE_UnderhillDeluxe_C : public UDrinkEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TargetScale;                                              // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class APlayerCharacter*                            Character;                                                // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              StartScale;                                               // 0x0120(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Progress;                                                 // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentScale;                                             // 0x0128(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale_Check_Cooldown;                                     // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsScalingActive;                                          // 0x0130(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              Previous_Progress;                                        // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartCameraOffset;                                        // 0x0138(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetCameraOffset;                                       // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCameraOffset;                                      // 0x0140(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EffectEnabled;                                            // 0x0144(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_UnderhillDeluxe.DE_UnderhillDeluxe_C");
		return ptr;
	}


	void OnRep_CurrentCameraOffset();
	void OnRep_CurrentScale();
	void TraceForScaledCollision(bool* IsNextScaleColliding);
	void ReceiveTick(float* DeltaSeconds);
	void OnStartEffect(class APlayerCharacter** Character);
	void OnStopEffect();
	void Handle_Scaling(float* DeltaTime);
	void ExecuteUbergraph_DE_UnderhillDeluxe(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
