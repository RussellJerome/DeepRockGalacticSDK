#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Animation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Animation.BP_Animation_C
// 0x0058 (0x0150 - 0x00F8)
class UBP_Animation_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTransform                                  InitialLocalTransform;                                    // 0x0100(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationLength;                                          // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FDeltaGenTimelineAnimation                  Animation;                                                // 0x0138(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Animation.BP_Animation_C");
		return ptr;
	}


	void GetInitialTransformComponents(struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);
	void SetRotationCenter(struct FVector* Pivot, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale, struct FVector* outCenter, struct FVector* OutCenterLocal);
	void SetAnimation(struct FDeltaGenTimelineAnimation* Animation);
	void ResetTransform();
	void SetLocalTransform(struct FTransform* NewLocalTransform);
	struct FRotator ConvertDeltaGenEulerToRotator(struct FVector* InVec);
	void UpdateAnimation(float* Time);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Animation(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
