#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EndScreenActorController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndScreenActorController.EndScreenActorController_C
// 0x00C8 (0x01C0 - 0x00F8)
class UEndScreenActorController_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerTPAnimInstance*                       AnimInstance;                                             // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkPlayRate;                                             // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class ABP_MisComp_FXspawner_C*                     FX;                                                       // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      AttachmentClass;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      AttachmentActor;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              PosePlayRate;                                             // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0134(0x000C) MISSED OFFSET
	struct FTransform                                  SpawnTransfrom;                                           // 0x0140(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLooping;                                                // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	struct FEndScreenMove                              ActiveMoveSet;                                            // 0x0178(0x0048) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndScreenActorController.EndScreenActorController_C");
		return ptr;
	}


	void Reset();
	void SpawnAttachmentIfNeeded();
	void Cleanup();
	void InitFXLights(struct FTransform* SpawnTransform, bool* Survived);
	void RandomAnimElement(TArray<class UAnimSequence*>* Array, class UAnimSequence** Output);
	void ReceiveBeginPlay();
	void Play(class APlayerCharacter** PlayerCharacter, bool* SurvivedInPod, struct FTransform* SpawnTransform, struct FEndScreenMove* ESMoveSet, int* Seed);
	void PoseFinished(class UAnimMontage** Montage, bool* bInterrupted);
	void BreakFinished(class UAnimMontage** Montage, bool* bInterrupted);
	void WalkFinished(class UAnimMontage** Montage, bool* bInterrupted);
	void PropPoseDone(class UAnimMontage** Montage, bool* bInterrupted);
	void CustomEvent_1(class UAnimMontage** Montage, bool* bInterrupted);
	void ExecuteUbergraph_EndScreenActorController(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
