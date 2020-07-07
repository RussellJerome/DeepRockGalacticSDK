#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_LaserPointer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_LaserPointer.WPN_LaserPointer_C
// 0x00A0 (0x06B8 - 0x0618)
class AWPN_LaserPointer_C : public ALaserPointerItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FPTransform;                                              // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightBeam_Cylinder;                                       // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LightBeam;                                                // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             LaserLight_On_Cue;                                        // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TPTransform;                                              // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHUD_LaserPointerDisplay_C*                  HUD;                                                      // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Delay;                                                    // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BackgroundMaterial;                                       // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BackgroundDefaultColor;                                   // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_PointOfInterest_C*>               PointsOfInterest;                                         // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UTexture2D*                                  PreviousPOI;                                              // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousPOITime;                                          // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x069C(0x0004) MISSED OFFSET
	class UAudioComponent*                             StartStop;                                                // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGuid                                       PreviousLookAtID;                                         // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_LaserPointer.WPN_LaserPointer_C");
		return ptr;
	}


	void SetLaserBeamMaterial(class APlayerCharacter** InCharacter);
	void SetBeamVisibility(bool* bNewVisibility);
	void CanPlacePOI(struct FVector* Location, class UTexture** Icon, bool* Can_Place);
	void UpdateBackgroundColor();
	void SetBackgroundColor(struct FLinearColor* Value);
	void Adjust_Beam();
	void GetPointTransform(struct FTransform* PointTransform);
	void UserConstructionScript();
	void RecieveUnequipped();
	void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(class UUserWidget** Crosshair);
	void OnPointOfInterest(class AActor** TargetActor, struct FVector* TargetLocation, class UTexture2D** TargetIcon);
	void ReceiveBeginPlay();
	void ToggleLaserVisible(bool* aVisible);
	void AddedToInventory(class APlayerCharacter** ItemOwner);
	void OnScanComplete();
	void OnMarkerPlaced_Event(struct FVector* Location, struct FText* Name, struct FLinearColor* Color, class AActor** Target, ELaserPointerTargetType* TypeOfTarget);
	void RecieveEquipped();
	void OnPOIDestroyed(class AActor** DestroyedActor);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_WPN_LaserPointer(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
