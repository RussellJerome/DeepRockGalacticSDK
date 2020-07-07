#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_FSDCameraManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FSDCameraManager.BP_FSDCameraManager_C
// 0x004C (0x26AC - 0x2660)
class ABP_FSDCameraManager_C : public AFSDPlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2660(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        PhysicalSphere;                                           // 0x2668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               SessionStarted;                                           // 0x2670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2671(0x0003) MISSED OFFSET
	float                                              MaxDistance;                                              // 0x2674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    HideHUDForPhotography;                                    // 0x2678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShowHUDForPhotography;                                    // 0x2688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               UserVisibility;                                           // 0x2698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECharacterCameraMode                               PreviousCameraMode;                                       // 0x2699(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PauseGame;                                                // 0x269A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x269B(0x0001) MISSED OFFSET
	float                                              SphereReturnVelocity;                                     // 0x269C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistanceTolerance;                                     // 0x26A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeyDebug;                                                 // 0x26A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x26A5(0x0003) MISSED OFFSET
	float                                              MaxSpeed;                                                 // 0x26A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FSDCameraManager.BP_FSDCameraManager_C");
		return ptr;
	}


	void ChangeMaxDistance(float* MaxDistance);
	void ChangeSpeed(float* MaxSpeed);
	float SmoothReturnVelocity(struct FVector* New_Camera_Location);
	void SphereDirectionToPlayer(struct FVector* Direction);
	void SetToThirdPersonCamera(struct FVector* New_Camera_Position);
	void ReturnCameraMode(class APlayerCharacter** Target, ECharacterCameraMode* NewCameraMode);
	void PhotographyCameraModify(struct FVector* NewCameraLocation, struct FVector* PreviousCameraLocation, struct FVector* OriginalCameraLocation, struct FVector* ResultCameraLocation);
	void ReceiveDestroyed();
	void OnPhotographySessionEnd();
	void OnPhotographySessionStart();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void TogglePhotographyMode(bool* active);
	void Return_Camera();
	void LoaderStart(class ULevelSequence** LoaderLevelSequence);
	void LoaderStop();
	void ExecuteUbergraph_BP_FSDCameraManager(int* EntryPoint);
	void ShowHUDForPhotography__DelegateSignature();
	void HideHUDForPhotography__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
